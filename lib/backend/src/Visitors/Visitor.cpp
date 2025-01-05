#include "Visitor.h"

FAMMVisitor::FAMMVisitor() : Builder(TheContext) {
  TheModule = std::make_unique<llvm::Module>("FAMMModule", TheContext);
}

llvm::Value* FAMMVisitor::visitProgram(FAMMParser::ProgramContext *ctx) {
  // Обработка программы
  for (auto line : ctx->line()) {
    visit(line);
  }
  return nullptr;
}

llvm::Value* FAMMVisitor::visitExpression(FAMMParser::ExpressionContext *ctx) {
  // Handle constant expressions
  if (ctx->constant()) {
    return llvm::ConstantInt::get(TheContext, llvm::APInt(32, std::stoi(ctx->constant()->getText())));
  }

  // Handle variable expressions
  if (ctx->variable()) {
    std::string varName = ctx->variable()->getText();
    llvm::Value* value = NamedValues[varName];
    if (!value) {
      throw std::runtime_error("Unknown variable name: " + varName);
    }
    return value;
  }

  // Handle binary operations
  if (ctx->binaryOp()) {
    llvm::Value* left = visitExpression(ctx->left);
    llvm::Value* right = visitExpression(ctx->right);
    std::string op = ctx->binaryOp()->getText();

    if (op == "+") {
      return Builder.CreateAdd(left, right, "addtmp");
    } else if (op == "-") {
      return Builder.CreateSub(left, right, "subtmp");
    } else if (op == "*") {
      return Builder.CreateMul(left, right, "multmp");
    } else if (op == "/") {
      return Builder.CreateSDiv(left, right, "divtmp");
    } else {
      throw std::runtime_error("Unknown binary operator: " + op);
    }
  }

  // Handle function calls
  if (ctx->functionCall()) {
    std::string funcName = ctx->functionCall()->getText();
    llvm::Function* function = TheModule->getFunction(funcName);
    if (!function) {
      throw std::runtime_error("Unknown function: " + funcName);
    }

    std::vector<llvm::Value*> args;
    for (auto argCtx : ctx->functionCall()->arguments()) {
      args.push_back(visitExpression(argCtx));
    }

    return Builder.CreateCall(function, args, "calltmp");
  }

  // Handle other types of expressions
  // ...

  return nullptr;
}

llvm::Value* FAMMVisitor::visitFunctionDefinition(FAMMParser::FunctionDefinitionContext *ctx) {
  // Обработка определения функции
  std::string functionName = ctx->IDENTIFIER()->getText();
  // Создание функции в LLVM IR
  // ...
  return nullptr;
}

// Реализация других методов
