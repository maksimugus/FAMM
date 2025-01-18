#include "FAMMLexer.h"
#include "FAMMParser.h"
#include "lib/backend/src/Visitors/Visitor.h"
#include "lib/utils/CLIManager.h"
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

void run(LLVMIRGenerator& visitor, const CLIManager& climanager) {
    std::string error;
    LLVMLinkInMCJIT();
    LLVMJIT::run(visitor.getModule(), error, climanager);
    if (!error.empty()) {
        llvm::errs() << error << "\n";
    }
}

bool generateLLVMIR(LLVMIRGenerator& visitor, tree::ParseTree* tree) {
    try {
        visitor.visit(tree);
    } catch (const std::exception& e) {
        std::cerr << "An error occurred during generating LLVM IR code: \n" << e.what() << std::endl;
        return false;
    }
    return true;
}


void compile(LLVMIRGenerator& visitor, const CLIManager& climanager) {
    std::string error;
    ObjectEmitter::emit(visitor.getModule(), error, climanager);

    if (!error.empty()) {
        llvm::errs() << error << "\n";
    }
}

int main(int argc, const char* argv[]) {
    CLIManager cli(argc, argv);

    const std::string& filename = cli.inputFile();
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return 1;
    }

    std::stringstream buffer;
    buffer << file.rdbuf();
    std::string input_string = buffer.str();
    file.close();
    ANTLRInputStream input(input_string);

    FAMMLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    FAMMParser parser(&tokens);
    tree::ParseTree* tree = parser.program();

    if (cli.printTree()) {
        std::cout << tree->toStringTree(&parser) << "\n\n";
    }

    if (cli.jit() or cli.compile()) {
        auto visitor = LLVMIRGenerator();
        if (bool success = generateLLVMIR(visitor, tree); !success) {
            return 1;
        }

        if (cli.printUnoptimized()) {
            visitor.printIR();
        }

        llvm::InitializeNativeTarget();
        llvm::InitializeNativeTargetAsmPrinter();
        llvm::InitializeNativeTargetAsmParser();

        if (cli.compile()) {
            compile(visitor, cli);
        } else {
            run(visitor, cli);
        }
        return 0;
    }

    // auto visitor = LLVMIRGenerator();

}
