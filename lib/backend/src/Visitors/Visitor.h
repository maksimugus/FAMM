#ifndef FAMMVISITOR_H
#define FAMMVISITOR_H

#include "FAMMParser.h"
#include "antlr4-runtime.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"

class FAMMVisitor : public antlr4::tree::AbstractParseTreeVisitor {
 public:
  FAMMVisitor();

  // Метод для посещения программы
  llvm::Value* visitProgram(FAMMParser::ProgramContext *ctx);

  // Метод для посещения выражений
  llvm::Value* visitExpression(FAMMParser::ExpressionContext *ctx);

  // Метод для посещения определения функции
  llvm::Value* visitFunctionDefinition(FAMMParser::FunctionDefinitionContext *ctx);

  // Другие методы для посещения узлов дерева
  // ...

 private:
  llvm::LLVMContext TheContext;
  llvm::IRBuilder<> Builder;
  std::unique_ptr<llvm::Module> TheModule;
  std::map<std::string, llvm::Value*> NamedValues;
};

#endif // FAMMVISITOR_H
