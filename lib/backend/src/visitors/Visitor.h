#pragma once

#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"

#include "antlr4-runtime.h"
#include "FAMMParser.h"

using namespace antlr4;

class LLVMIRGenerator : public tree::AbstractParseTreeVisitor {
public:
    LLVMIRGenerator() : context(), builder(context), module("my_module", context) {}

    void printIR() const {
        module.print(llvm::outs(), nullptr);
    }

    std::any visit(tree::ParseTree *node) override {
        if (const auto program = dynamic_cast<FAMMParser::ProgramContext*>(node)) {
            return visitProgram(program);
        }

        return nullptr;
    }

    std::any visitProgram(FAMMParser::ProgramContext* node) {
        // Create the main function: int main()
        llvm::FunctionType* mainType = llvm::FunctionType::get(llvm::Type::getInt32Ty(context), false);
        llvm::Function* mainFunction = llvm::Function::Create(mainType, llvm::Function::ExternalLinkage, "main", module);

        // Create a new basic block to start insertion into
        llvm::BasicBlock* entry = llvm::BasicBlock::Create(context, "entry", mainFunction);
        builder.SetInsertPoint(entry);

        // Visit each line in the program
        for (const auto line : node->line()) {
            visitLine(line);
        }

        // Return 0 from main
        builder.CreateRet(llvm::ConstantInt::get(llvm::Type::getInt32Ty(context), 0));

        // Verify the function
        llvm::verifyFunction(*mainFunction);

        return nullptr;
    }

    llvm::Value* visitConstant(FAMMParser::ConstantContext* constantContext) {
        if (constantContext->INTEGER_LIT()) {
            // Convert the integer literal text to an integer value
            int intValue = std::stoi(constantContext->INTEGER_LIT()->getText());
            return llvm::ConstantInt::get(llvm::Type::getInt32Ty(context), intValue, true);
        } else if (constantContext->FLOAT_LIT()) {
            // Convert the float literal text to a float value
            float floatValue = std::stof(constantContext->FLOAT_LIT()->getText());
            return llvm::ConstantFP::get(llvm::Type::getFloatTy(context), floatValue);
        } else if (constantContext->STRING_LIT()) {
            // Get the string literal text, assuming it is properly escaped
            std::string strValue = constantContext->STRING_LIT()->getText();
            // Remove quotes if necessary
            strValue = strValue.substr(1, strValue.length() - 2);
            return builder.CreateGlobalStringPtr(strValue, "strtmp");
        } else if (constantContext->BOOL_LIT()) {
            // Convert the boolean literal text to a boolean value
            bool boolValue = (constantContext->BOOL_LIT()->getText() == "true");
            return llvm::ConstantInt::get(llvm::Type::getInt1Ty(context), boolValue, false);
        }

        throw std::runtime_error("Unknown constant type");
    }
    llvm::Value* visitExpression(FAMMParser::ExpressionContext* expressionContext) {
        if (const auto addSubCtx = dynamic_cast<FAMMParser::AddSubExpressionContext*>(expressionContext)) {
            llvm::Value* left = visitExpression(addSubCtx->expression(0));
            llvm::Value* right = visitExpression(addSubCtx->expression(1));
            if (addSubCtx->addOp()->PLUS()) {
                return builder.CreateAdd(left, right, "addtmp");
            } else if (addSubCtx->addOp()->MINUS()) {
                return builder.CreateSub(left, right, "subtmp");
            }
        } else if (const auto mulDivCtx = dynamic_cast<FAMMParser::MulDivExpressionContext*>(expressionContext)) {
            llvm::Value* left = visitExpression(mulDivCtx->expression(0));
            llvm::Value* right = visitExpression(mulDivCtx->expression(1));
            if (mulDivCtx->multOp()->MULT()) {
                return builder.CreateMul(left, right, "multmp");
            } else if (mulDivCtx->multOp()->DIV()) {
                return builder.CreateSDiv(left, right, "divtmp");
            } else if (mulDivCtx->multOp()->MOD()) {
                return builder.CreateSRem(left, right, "modtmp");
            }
        } else if (const auto constCtx = dynamic_cast<FAMMParser::ConstantExpressionContext*>(expressionContext)) {
            return visitConstant(constCtx->constant());
        } /*else if (auto parenCtx = dynamic_cast<FAMMParser::ParenExpressionContext*>(expressionContext)) {
            return visitExpression(parenCtx->expression());
        } else if (auto compareCtx = dynamic_cast<FAMMParser::CompareExpressionContext*>(expressionContext)) {
            llvm::Value* left = visitExpression(compareCtx->expression(0));
            llvm::Value* right = visitExpression(compareCtx->expression(1));
            return visitCompareOp(compareCtx->compareOp(), left, right);
        } else if (auto boolCtx = dynamic_cast<FAMMParser::BoolExpressionContext*>(expressionContext)) {
            llvm::Value* left = visitExpression(boolCtx->expression(0));
            llvm::Value* right = visitExpression(boolCtx->expression(1));
            return visitBoolOp(boolCtx->boolOp(), left, right);
        } else if (auto negationCtx = dynamic_cast<FAMMParser::NegationExpressionContext*>(expressionContext)) {
            llvm::Value* value = visitExpression(negationCtx->expression());
            return builder.CreateNot(value, "nottmp");
        } else if (auto funcCallCtx = dynamic_cast<FAMMParser::FunctionCallExpressionContext*>(expressionContext)) {
            return visitFunctionCall(funcCallCtx->functionCall());
        } else if (auto identCtx = dynamic_cast<FAMMParser::IdentifierExpressionContext*>(expressionContext)) {
            return visitIdentifier(identCtx->IDENTIFIER());
        }*/

        throw std::runtime_error("Unknown expression type");
    }
    llvm::Type* getLLVMType(const std::string& typeStr) {
      if (typeStr == "int") {
        return llvm::Type::getInt32Ty(context);
      } else if (typeStr == "float") {
        return llvm::Type::getFloatTy(context);
      } else if (typeStr == "string") {
        // чета не то я хз нет чара пиздец
        return llvm::Type::getInt8Ty(context);
      } else if (typeStr == "bool") {
        return llvm::Type::getInt1Ty(context); // Boolean as a 1-bit integer
      } else {
        throw std::runtime_error("Unknown type string: " + typeStr);
      }
    }

    std::string visitType(FAMMParser::TypeContext* typeContext) {
        if (typeContext->INT()) {
            return "int";
        }
        if (typeContext->FLOAT()) {
            return "float";
        }
        if (typeContext->STRING()) {
            return "string";
        }
        if (typeContext->BOOL()) {
            return "bool";
        }
        throw std::runtime_error("Unknown type in TypeContext");
    }


    void visitDeclarationWithDefinition(FAMMParser::DeclarationWithDefinitionContext* node) {
        std::string variableName = node->IDENTIFIER()->getText();
        auto typeContext = node->type();
        std::string variableType = visitType(typeContext);
        auto expressionContext = node->expression();
        llvm::Value* initialValue = visitExpression(expressionContext);
        llvm::Type* llvmType = getLLVMType(variableType);
        llvm::Function* currentFunction = builder.GetInsertBlock()->getParent();
        llvm::IRBuilder<> tempBuilder(&currentFunction->getEntryBlock(), currentFunction->getEntryBlock().begin());
        llvm::AllocaInst* alloca = tempBuilder.CreateAlloca(llvmType, nullptr, variableName);

        builder.CreateStore(initialValue, alloca);
    }

    std::any visitDeclaration(FAMMParser::DeclarationContext* node) {
        if (node->declarationWithDefinition()) {
            visitDeclarationWithDefinition(node->declarationWithDefinition());
        }

        return nullptr;
    }

    std::any visitStatement(FAMMParser::StatementContext* node) {
        if (node->declaration()) {
            // Обработка объявления
            return visitDeclaration(node->declaration());
        } /*else if (node->definition()) {
            // Обработка определения
            return visitDefinition(node->definition());
        } else if (node->functionCall()) {
            // Обработка вызова функции
            return visitFunctionCall(node->functionCall());
        }*/
        // Если ни одно из условий не выполнено, можно выбросить исключение или вернуть nullptr
        throw std::runtime_error("Unknown statement context");
    }

    std::any visitLine(FAMMParser::LineContext* node) {
      if (node->statement()) {
        return visitStatement(node->statement());
      }
      //    } else if (node->expression()) {
      //        return visitExpression(node->expression());
      //    } else if (node->ifBlock()) {
      //        return visitIfBlock(node->ifBlock());
      //    } else if (node->whileBlock()) {
      //        // Обработка блока while
      //        return visitWhileBlock(node->whileBlock());
      //    } else if (node->forBlock()) {
      //        // Обработка блока for
      //        return visitForBlock(node->forBlock());
      //    } else if (node->functionDefinition()) {
      //        // Обработка определения функции
      //        return visitFunctionDefinition(node->functionDefinition());
      //    } else if (node->SEMICOLON()) {
      //        // Пустая строка или просто ';'
      //        return nullptr;
      //    }
      // Если ни одно из условий не выполнено, можно выбросить исключение или вернуть nullptr
      throw std::runtime_error("Unknown line context");
    }

private:
    llvm::LLVMContext context;
    llvm::IRBuilder<> builder;
    llvm::Module module;
};