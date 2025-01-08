#include "FAMMLexer.h"
#include "FAMMParser.h"
#include "lib/backend/src/Visitors/Visitor.h"
#include "run/ObjectEmitter.h"
#include <antlr4-runtime.h>
#include <llvm/Support/TargetSelect.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace antlr4;
using namespace std;

// int run(const FooLang::CLIManager& cli, FooLang::Visitor& visitor) {
//     auto jit = FooLang::JIT::create(visitor.llvm_module, visitor.llvm_context);
//
//     auto entry = jit->lookup<int()>("main");
//     if (!entry) {
//         llvm::errs() << entry.takeError();
//         return 1;
//     }
//
//     return entry.get()();
// }
//
int compile(LLVMIRGenerator& visitor, const string& filename) {
    std::string error;
    ObjectEmitter::emit(visitor.getModule(), filename, error);

    if (!error.empty()) {
        llvm::errs() << error;
        return 1;
    }

    return 0;
}

int main(int argc, const char* argv[]) {
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <file.famm> [--compile]" << endl;
        return 1;
    }

    string filename  = argv[1];
    bool compileMode = false;

    if (argc >= 3 && string(argv[2]) == "--compile") {
        compileMode = true;
    }

    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return 1;
    }

    stringstream buffer;
    buffer << file.rdbuf();
    string input_string = buffer.str();
    file.close();
    ANTLRInputStream input(input_string);

    FAMMLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    FAMMParser parser(&tokens);
    tree::ParseTree* tree = parser.program();

    std::cout << "Parsed tree: " << tree->toStringTree(&parser) << std::endl;

    auto visitor = LLVMIRGenerator();
    visitor.visit(tree);

    visitor.printIR();
    // visitor

    llvm::InitializeNativeTarget();
    llvm::InitializeNativeTargetAsmParser();
    llvm::InitializeNativeTargetAsmPrinter();

    // if (compileMode) {
    compile(visitor, "output.o");
    // } else {
    // runJIT(visitor.getModule());
    // }

    return 0;
}
