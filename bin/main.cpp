#include "FAMMLexer.h"
#include "FAMMParser.h"
#include "lib/backend/src/Visitors/Visitor.h"
#include <antlr4-runtime.h>
#include <iostream>
#include <sstream>

#include "llvm/ExecutionEngine/SectionMemoryManager.h"
#include "run/JIT.h"

using namespace antlr4;
using namespace std;

void run(LLVMIRGenerator& visitor) {
    auto jit = LLVMJIT(visitor.getModule());
    jit.runCode();
}

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
    LLVMLinkInMCJIT();

    run(visitor);
    return 0;
    // TODO: нужны встроенные функции (хотя бы display(...))
    // TODO: тесты на famm (можно будет сделать после добавления display() )
}
