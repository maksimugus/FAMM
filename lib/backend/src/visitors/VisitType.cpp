#include "Visitor.h"

llvm::Type* LLVMIRGenerator::getLLVMType(const std::string& typeStr) {
    if (typeStr.find("array") == 0) {
        size_t start = typeStr.find('<') + 1;
        size_t end = typeStr.find('>');
        std::string elementType = typeStr.substr(start, end - start);
        llvm::Type* elementLLVMType = getLLVMType(elementType);
        return llvm::ArrayType::get(elementLLVMType, 0 /*arraySize*/); // TODO: НУЖНО ПРИДУМАТЬ КАК ДОБЫВАТЬ РАЗМЕР МАССИВА
    }

    if (typeStr == "int") {
        return llvm::Type::getInt32Ty(*context);
    }
    if (typeStr == "float") {
        return llvm::Type::getFloatTy(*context);
    }
    if (typeStr == "string") {
        return llvm::PointerType::getInt8Ty(*context);
    }
    if (typeStr == "bool") {
        return llvm::Type::getInt1Ty(*context); // Boolean as a 1-bit integer
    }
    throw std::runtime_error("Unknown type string: " + typeStr);
}

std::string LLVMIRGenerator::visitType(FAMMParser::TypeContext* typeContext) {
    if (auto baseType = typeContext->baseType()) {
        return visitBaseType(baseType);
    }

    if (auto arrayType = typeContext->arrayType()) {
        return "array<" + visitBaseType(arrayType->type()->baseType()) + ">";
    }

    throw std::runtime_error("Unknown type in TypeContext");
}

std::string LLVMIRGenerator::visitBaseType(FAMMParser::BaseTypeContext* baseTypeContext) {
    if (baseTypeContext->INT())
        return "int";

    if (baseTypeContext->FLOAT())
        return "float";

    if (baseTypeContext->STRING())
        return "string";

    if (baseTypeContext->BOOL())
        return "bool";

    throw std::runtime_error("Unknown type in BaseTypeContext");
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

        throw std::runtime_error("Type mismatch: first value of type '" + firstTypeName +
                                 "' cannot be compared or assigned to second value of type '" + secondTypeName + "'.");
    }
}