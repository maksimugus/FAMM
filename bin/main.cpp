#include "FAMMLexer.h"
#include "FAMMParser.h"
#include "Nothing.h"

#include <iostream>
#include <sstream>


using namespace antlr4;
using namespace std;

int main(int argc, const char *argv[]) {
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
  tree::ParseTree *tree = parser.program();
  std::cout << "Parse tree: " << tree->toStringTree(&parser) << std::endl;

  // Generate LLVM module using the backend
  LLVMModuleGenerator llvmGenerator;
  llvmGenerator.generateModule();

  return 0;
}
