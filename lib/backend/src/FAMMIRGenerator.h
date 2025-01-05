#pragma once

#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>

#include <map>

#include "../../frontend/gen/FAMMBaseListener.h"
#include "../../frontend/gen/FAMMListener.h"
#include "../../frontend/gen/FAMMParser.h"
// #include "FAMMBaseListener.h"
// #include "FAMMParser.h"
/**

Класс для обхода дерева разбора FAMM и генерации LLVM IR. */
class FAMMIRGenerator : public FAMMBaseListener {
 private:
  FAMMIRGenerator();
  ~FAMMIRGenerator();
  llvm::LLVMContext TheContext;
  std::unique_ptr<llvm::Module> TheModule;
  std::unique_ptr<llvm::IRBuilder<>> Builder;
  // Таблица символов: для хранения переменных и их значений (Value*)
  std::map<std::string, llvm::Value *> NamedValues;
  // Таблица функций: имя ->llvm::Function*
  std::map<std::string, llvm::Function *> Functions;

  // Переопределите нужные методы FAMMBaseListener для различных правил
  // грамматики:
  void enterProgram(FAMMParser::ProgramContext *ctx) override;
  void exitProgram(FAMMParser::ProgramContext *ctx) override;
  void enterFunctionDefinition(
      FAMMParser::FunctionDefinitionContext *ctx) override;
  void exitFunctionDefinition(
      FAMMParser::FunctionDefinitionContext *ctx) override;
  void enterDeclarationWithDefinition(
      FAMMParser::DeclarationWithDefinitionContext *ctx) override;
  void enterDefinition(FAMMParser::DefinitionContext *ctx) override;
  void enterIfBlock(FAMMParser::IfBlockContext *ctx) override;
  // Аналогично можно переопределить enterWhileBlock, enterForBlock и т. п. //
  // Добавьте методы для генерации IR выражений
  llvm::Value *generateExpression(FAMMParser::ExpressionContext *ctx);
};