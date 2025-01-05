#include "FAMMLexer.h"
#include "FAMMParser.h"
#include "Nothing.h"  // Make sure this is included

#include <iostream>
#include <fstream>
#include <sstream>
#include <antlr4-runtime.h>

using namespace antlr4;

int main(int argc, const char *argv[]) {
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " <file.famm>" << std::endl;
    return 1;
  }

  // Open the input file
  std::ifstream file(argv[1]);
  if (!file.is_open()) {
    std::cerr << "Error opening file: " << argv[1] << std::endl;
    return 1;
  }

  std::stringstream buffer;
  buffer << file.rdbuf();
  std::string input_string = buffer.str();

  // Set up ANTLR input and lexer
  ANTLRInputStream input(input_string);
  FAMMLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  FAMMParser parser(&tokens);

  // Parse the program
  tree::ParseTree *tree = parser.program();
  std::cout << "Parse tree: " << tree->toStringTree(&parser) << std::endl;

  // Generate LLVM module using the backend
  LLVMModuleGenerator llvmGenerator;
  llvmGenerator.generateModule();

  return 0;
}
