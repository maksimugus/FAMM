#include "FAMMLexer.h"
#include "FAMMParser.h"
#include "lib/backend/src/Visitors/Visitor.h"
#include "llvm/ExecutionEngine/ExecutionEngine.h"
#include "llvm/ExecutionEngine/SectionMemoryManager.h"
#include "llvm/Support/raw_ostream.h"
#include "run/JIT.h"
#include "run/ObjectEmitter.h"
#include <antlr4-runtime.h>
#include <iostream>
#include <llvm/Support/TargetSelect.h>
#include <sstream>


using namespace antlr4;
using namespace std;

void run(LLVMIRGenerator& visitor, const bool print_optimised = false) {
    std::string error;
    LLVMLinkInMCJIT();
    LLVMJIT::run(visitor.getModule(), error, print_optimised);
    if (!error.empty()) {
        llvm::errs() << error << "\n";
    }
}


void compile(LLVMIRGenerator& visitor, const string& filename) {
    std::string error;
    ObjectEmitter::emit(visitor.getModule(), filename, error);

    if (!error.empty()) {
        llvm::errs() << error << "\n";
    }
}

int main(int argc, const char* argv[]) {
    // todo climanager --compile --print_optimised
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <file.famm>" << endl;
        return 1;
    }

    string filename = argv[1];
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


    std::cout << tree->toStringTree(&parser) << std::endl;
    auto visitor = LLVMIRGenerator();
    visitor.visit(tree);

    visitor.printIR();

    llvm::InitializeNativeTarget();
    llvm::InitializeNativeTargetAsmPrinter();
    llvm::InitializeNativeTargetAsmParser();

    // compile(visitor, comp_file);
    run(visitor, true);

    return 0;
    // TODO: нужны встроенные функции (хотя бы display(...))
    // TODO: тесты на famm (можно будет сделать после добавления display() )
}
