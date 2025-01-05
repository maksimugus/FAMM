#include "FAMMIRGenerator.h"
#include <llvm/IR/Verifier.h>
#include <iostream>

FAMMIRGenerator::FAMMIRGenerator() {
  TheModule = std::make_unique<llvm::Module>("FAMMModule", TheContext);
  Builder = std::make_unique<llvm::IRBuilder<>>(TheContext);
}

FAMMIRGenerator::~FAMMIRGenerator() {
}

void FAMMIRGenerator::enterProgram(FAMMParser::ProgramContext *ctx) {
}

void FAMMIRGenerator::exitProgram(FAMMParser::ProgramContext *ctx) {
  llvm::verifyModule(*TheModule, &llvm::errs());
  TheModule->print(llvm::errs(), nullptr);
}

void FAMMIRGenerator::enterFunctionDefinition(FAMMParser::FunctionDefinitionContext *ctx) {
  std::string funcName = ctx->IDENTIFIER()->getText();
  llvm::Type* returnType = llvm::Type::getInt32Ty(TheContext);
  std::vector<llvm::Type*> argTypes;
  if (auto paramList = ctx->parameterList()) {
    for (auto param : paramList->parameter()) {
      argTypes.push_back(llvm::Type::getInt32Ty(TheContext));
    }
  }
  llvm::FunctionType* fType = llvm::FunctionType::get(returnType, argTypes, false);
  llvm::Function* function = llvm::Function::Create(fType, llvm::Function::ExternalLinkage, funcName, TheModule.get());
  Functions[funcName] = function;
  llvm::BasicBlock* BB = llvm::BasicBlock::Create(TheContext, "entry", function);
  Builder->SetInsertPoint(BB);
  unsigned idx = 0;
  for (auto &arg : function->args()) {
    std::string argName = ctx->parameterList()->parameter(idx)->IDENTIFIER()->getText();
    arg.setName(argName);
    llvm::AllocaInst* alloc = Builder->CreateAlloca(llvm::Type::getInt32Ty(TheContext), nullptr, argName);
    Builder->CreateStore(&arg, alloc);
    NamedValues[argName] = alloc;
    idx++;
  }
}

void FAMMIRGenerator::exitFunctionDefinition(FAMMParser::FunctionDefinitionContext *ctx) {
  Builder->CreateRet(llvm::ConstantInt::get(TheContext, llvm::APInt(32, 0)));
}

void FAMMIRGenerator::enterDeclarationWithDefinition(FAMMParser::DeclarationWithDefinitionContext *ctx) {
  std::string varName = ctx->IDENTIFIER()->getText();
  llvm::AllocaInst* alloc = Builder->CreateAlloca(llvm::Type::getInt32Ty(TheContext), nullptr, varName);
  llvm::Value* initVal = generateExpression(ctx->expression());
  Builder->CreateStore(initVal, alloc);
  NamedValues[varName] = alloc;
}

void FAMMIRGenerator::enterDefinition(FAMMParser::DefinitionContext *ctx) {
  std::string varName = ctx->IDENTIFIER()->getText();
  if (NamedValues.find(varName) == NamedValues.end()) {
    std::cerr << "Unknown variable: " << varName << std::endl;
    return;
  }
  llvm::Value* val = generateExpression(ctx->expression());
  Builder->CreateStore(val, NamedValues[varName]);
}

void FAMMIRGenerator::enterIfBlock(FAMMParser::IfBlockContext *ctx) {
  llvm::Function* currentFunc = Builder->GetInsertBlock()->getParent();
  llvm::Value* condVal = generateExpression(ctx->expression());
  llvm::Value* condBool = Builder->CreateICmpNE(condVal, llvm::ConstantInt::get(TheContext, llvm::APInt(32, 0)), "ifcond");
  llvm::BasicBlock* thenBB = llvm::BasicBlock::Create(TheContext, "then", currentFunc);
  llvm::BasicBlock* elseBB = nullptr;
  llvm::BasicBlock* mergeBB = llvm::BasicBlock::Create(TheContext, "ifcont");
  if (ctx->block().size() > 1) {
    elseBB = llvm::BasicBlock::Create(TheContext, "else");
  } else {
    elseBB = mergeBB;
  }
  Builder->CreateCondBr(condBool, thenBB, elseBB);
  Builder->SetInsertPoint(thenBB);
  Builder->CreateBr(mergeBB);
  if (elseBB != mergeBB) {
    currentFunc->insert(currentFunc->end(), elseBB);
    Builder->SetInsertPoint(elseBB);
    Builder->CreateBr(mergeBB);
  }
  currentFunc->insert(currentFunc->end(), mergeBB);
  Builder->SetInsertPoint(mergeBB);
}

llvm::Value* FAMMIRGenerator::generateExpression(FAMMParser::ExpressionContext *ctx) {
  if (auto constExpr = dynamic_cast<FAMMParser::ConstantExpressionContext*>(ctx)) {
    auto constVal = constExpr->constant()->INTEGER_LIT();
    if (constVal) {
      int value = std::stoi(constVal->getText());
      return llvm::ConstantInt::get(TheContext, llvm::APInt(32, value));
    }
  } else if (auto idExpr = dynamic_cast<FAMMParser::IdentifierExpressionContext*>(ctx)) {
    std::string varName = idExpr->IDENTIFIER()->getText();
    if (NamedValues.count(varName)) {
      llvm::Value* ptr = NamedValues[varName];
      return Builder->CreateLoad(llvm::Type::getInt32Ty(TheContext), ptr, varName.c_str());
    }
  }
  return nullptr;
}