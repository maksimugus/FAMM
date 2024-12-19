#include <antlr4-runtime.h>

#include <iostream>
#include <sstream>

#include "FAMMBaseListener.h"
#include "FAMMLexer.h"
#include "FAMMListener.h"
#include "FAMMParser.h"

using namespace antlr4;
using namespace std;

int main() {
  string input_string = R"(
    while (i < 5) {
        i += 1;
    };
    )";

  ANTLRInputStream input(input_string);

  FAMMLexer lexer(&input);

  CommonTokenStream tokens(&lexer);

  FAMMParser parser(&tokens);
  tree::ParseTree *tree = parser.program();
  cout << tree->toStringTree(&parser) << endl;

  return 0;
}
