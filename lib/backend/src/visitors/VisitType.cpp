#include "Visitor.h"

llvm::Type* LLVMIRGenerator::getLLVMType(FAMMParser::TypeContext* typeContext) {
    if (auto baseType = typeContext->baseType()) {
        if (baseType->INT()) {
            return llvm::Type::getInt32Ty(*context);
        }

        if (baseType->FLOAT()) {
            return llvm::Type::getFloatTy(*context);
        }

        if (baseType->STRING()) {
            return llvm::PointerType::getInt8Ty(*context);
        }

        if (baseType->BOOL()) {
            return llvm::Type::getInt1Ty(*context); // Boolean as a 1-bit integer
        }

        throw std::runtime_error("Unknown type in BaseTypeContext");
    }

    if (auto arrayType = typeContext->arrayType()) {
        auto type        = getLLVMType(arrayType->type());
        auto sizeContext = arrayType->size();
        int size         = std::stoi(sizeContext->INTEGER_LIT()->getText());
        return llvm::ArrayType::get(type, size);
    }

    throw std::runtime_error("Unknown type in TypeContext");
}

std::string getTypeName(const llvm::Type* type) {
    std::string typeName;
    llvm::raw_string_ostream rso(typeName);
    type->print(rso);
    return rso.str();
}

void LLVMIRGenerator::EnsureTypeEq(const llvm::Type* firstType, const llvm::Type* secondType) {
    if (firstType != secondType) {
        const std::string firstTypeName  = getTypeName(firstType);
        const std::string secondTypeName = getTypeName(secondType);

        throw std::runtime_error("Type mismatch: first value of type '" + firstTypeName
                                 + "' cannot be compared or assigned to second value of type '" + secondTypeName
                                 + "'.");
    }
}
