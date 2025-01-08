#include "FAMMLexer.h"
#include "FAMMParser.h"
#include "lib/backend/src/Visitors/Visitor.h"
#include <antlr4-runtime.h>
#include <iostream>
#include <sstream>

#include "llvm/ExecutionEngine/ExecutionEngine.h"
#include "llvm/ExecutionEngine/SectionMemoryManager.h"
#include "llvm/ExecutionEngine/GenericValue.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/IR/Verifier.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Support/raw_ostream.h"

using namespace antlr4;
using namespace std;

int main(int argc, const char* argv[]) {
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
//     LLVMLinkInMCJIT();
//     llvm::InitializeNativeTarget();
//     llvm::InitializeNativeTargetAsmPrinter();
//     llvm::InitializeNativeTargetAsmParser();
// //    llvm::Function *mainFunction = visitor.module->getFunction("main");
//
// //    if (!mainFunction) {
// //        llvm::errs() << "Function 'main' not found in module.\n";
// //        return 1;
// //    }
// //    if (llvm::verifyModule(*visitor.module, &llvm::errs())) {
// //        llvm::errs() << "Module verification failed.\n";
// //        return 1;
// //    } TODO
//     std::string error;
//     llvm::ExecutionEngine *engine = llvm::EngineBuilder(visitor.getModule())
//         .setErrorStr(&error)
//         .setEngineKind(llvm::EngineKind::JIT)
//         .setMCJITMemoryManager(std::make_unique<llvm::SectionMemoryManager>())
//         .create();
//
//     if (!engine) {
//         llvm::errs() << "Failed to create ExecutionEngine: " << error << "\n";
//         return 1;
//     }
//     // Компиляция и выполнение функции
//     std::vector<llvm::GenericValue> noArgs;
//    llvm::GenericValue result = engine->runFunction(mainFunction, noArgs); TODO

    // Вывод результата
//    llvm::outs() << "Result: " << result.IntVal << "\n"; TODO


    return 0;
    // TODO: нужны встроенные функции (хотя бы display(...))
    // TODO: тесты на famm (можно будет сделать после добавления display() )
}
