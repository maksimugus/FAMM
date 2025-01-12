#include "ExternalFunctions.h"

#include <llvm/IR/Constants.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Value.h>

llvm::Value* display(const std::unique_ptr<llvm::Module>& llvm_module, llvm::IRBuilder<>& builder,
    const std::string& format, const std::vector<llvm::Value*>& values) {
    llvm::LLVMContext& context = llvm_module->getContext();

    llvm::FunctionType* displayTy = llvm::FunctionType::get(
        llvm::IntegerType::getInt32Ty(context), llvm::PointerType::getUnqual(llvm::Type::getInt8Ty(context)), true);

    const llvm::FunctionCallee displayFunc = llvm_module->getOrInsertFunction("display", displayTy);

    std::string formatStr = format;
    if (formatStr.empty()) {
        for (const llvm::Value* val : values) {
            if (const llvm::Type* ty = val->getType(); ty->isIntegerTy(1)) {
                formatStr += "%d ";
            } else if (ty->isIntegerTy(64)) {
                formatStr += "%lld "; // Use %lld for 64-bit integers
            } else if (ty->isIntegerTy()) {
                formatStr += "%d ";
            } else if (ty->isDoubleTy()) {
                formatStr += "%f ";
            } else if (ty->isPointerTy()) {
                formatStr += "%s ";
            } else {
                formatStr += "%p ";
            }
        }
        formatStr += "\n";
    }

    llvm::Constant* formatConst = llvm::ConstantDataArray::getString(context, formatStr);
    const auto formatStrVar     = new llvm::GlobalVariable(
        *llvm_module, formatConst->getType(), true, llvm::GlobalValue::PrivateLinkage, formatConst, ".str");

    llvm::Constant* zero         = llvm::ConstantInt::get(context, llvm::APInt(32, 0));
    llvm::Constant* indices[]    = {zero, zero};
    llvm::Constant* formatStrPtr = llvm::ConstantExpr::getGetElementPtr(formatConst->getType(), formatStrVar, indices);

    std::vector<llvm::Value*> displayArgs;
    displayArgs.push_back(formatStrPtr);
    for (llvm::Value* val : values) { // TODO очень подумать зачем касты
        if (const llvm::Type* valTy = val->getType(); valTy->isIntegerTy(1)) {
            val = builder.CreateIntCast(val, llvm::Type::getInt32Ty(context), false);
        } else if (valTy->isIntegerTy() && valTy->getIntegerBitWidth() < 64) {
            val = builder.CreateIntCast(val, llvm::Type::getInt64Ty(context), false);
        } else if (valTy->isFloatingPointTy() && valTy->getPrimitiveSizeInBits() < 64) {
            val = builder.CreateFPExt(val, llvm::Type::getDoubleTy(context));
        }
        displayArgs.push_back(val);
    }

    return builder.CreateCall(displayFunc, displayArgs, "displayCall");
}

const char* bool_to_string(bool value) {
    return value ? "true" : "false";
}

const char* int_to_string(long long value) {
    static std::string str;
    str = std::to_string(value);
    return str.c_str();
}

const char* float_to_string(double value) {
    static std::string str;
    str = std::to_string(value);
    return str.c_str();
}

long long string_to_int(const char* str) {
    if (str == nullptr || *str == '\0') {
        throw std::invalid_argument("Invalid input: Null or empty string.");
    }

    char* end;
    long long result = std::strtoll(str, &end, 10);

    // Проверка на наличие нечисловых символов
    if (*end != '\0') {
        throw std::invalid_argument("String contains invalid characters.");
    }

    // Проверка на переполнение int
    if (result < std::numeric_limits<long long>::min() || result > std::numeric_limits<long long>::max()) {
        throw std::out_of_range("Out of range: The string represents a number too large to fit in an integer.");
    }

    return static_cast<long long>(result);
}

double string_to_float(const char* str) {
    if (str == nullptr || *str == '\0') {
        throw std::invalid_argument("Invalid input: Null or empty string.");
    }

    char* end;
    double result = std::strtod(str, &end);

    // Проверка на наличие нечисловых символов
    if (*end != '\0') {
        throw std::invalid_argument("String contains invalid characters.");
    }

    // Проверка на переполнение double
    if (result < std::numeric_limits<double>::min() || result > std::numeric_limits<double>::max()) {
        throw std::out_of_range("Out of range: The string represents a number too large to fit in an integer.");
    }

    return static_cast<double>(result);
}

bool string_to_bool(const char* str) {
    if (str == nullptr || *str == '\0') {
        throw std::invalid_argument("Invalid input: Null or empty string.");
    }

    std::string lowerStr;
    for (size_t i = 0; str[i] != '\0'; ++i) {
        lowerStr += static_cast<char>(std::tolower(static_cast<unsigned char>(str[i])));
    }

    if (lowerStr == "true" || lowerStr == "1") {
        return true;
    } else if (lowerStr == "false" || lowerStr == "0") {
        return false;
    } else {
        throw std::invalid_argument("Invalid input: String cannot be converted to a boolean.");
    }
}

llvm::Value* intCast(llvm::Value* value, llvm::IRBuilder<>& builder, llvm::Module& module) {
    llvm::Type* sourceType     = value->getType();
    llvm::LLVMContext& context = builder.getContext();

    // Если исходный тип совпадает с целевым, каст не нужен
    if (sourceType->isIntegerTy(64)) {
        return value;
    }

    // Преобразование float -> int
    if (sourceType->isFloatingPointTy()) {
        return builder.CreateFPToSI(value, llvm::Type::getInt64Ty(context), "floatToInt");
    }

    // Преобразование bool -> int
    if (sourceType->isIntegerTy(1)) {
        return builder.CreateZExt(value, llvm::Type::getInt64Ty(context), "boolToInt");
    }

    // Преобразование string -> int
    if (sourceType->isPointerTy()) {
        llvm::FunctionType* stringToIntType =
            llvm::FunctionType::get(llvm::Type::getInt64Ty(context),
                {llvm::PointerType::get(llvm::Type::getInt8Ty(context), 0)}, false);
        llvm::FunctionCallee stringToIntFunc = module.getOrInsertFunction("string_to_int", stringToIntType);
        return builder.CreateCall(stringToIntFunc, {value});
    }

    throw std::runtime_error("Unsupported type cast.");
}

llvm::Value* floatCast(llvm::Value* value, llvm::IRBuilder<>& builder, llvm::Module& module) {
    llvm::Type* sourceType     = value->getType();
    llvm::LLVMContext& context = builder.getContext();

    // Если исходный тип совпадает с целевым, каст не нужен
    if (sourceType->isDoubleTy()) {
        return value;
    }

    // Преобразование int -> float
    if (sourceType->isIntegerTy(64)) {
        return builder.CreateSIToFP(value, llvm::Type::getDoubleTy(context), "intToFloat");
    }

    // Преобразование bool -> float
    if (sourceType->isIntegerTy(1)) {
        return builder.CreateUIToFP(value, llvm::Type::getDoubleTy(context), "boolToFloat");
    }

    // Преобразование string -> float
    if (sourceType->isPointerTy()) {
        llvm::FunctionType* stringToFloatType =
            llvm::FunctionType::get(llvm::Type::getDoubleTy(context),
                {llvm::PointerType::get(llvm::Type::getInt8Ty(context), 0)}, false);
        llvm::FunctionCallee stringToFloatFunc = module.getOrInsertFunction("string_to_float", stringToFloatType);
        return builder.CreateCall(stringToFloatFunc, {value});
    }

    throw std::runtime_error("Unsupported type cast.");
}

llvm::Value* boolCast(llvm::Value* value, llvm::IRBuilder<>& builder, llvm::Module& module) {
    llvm::Type* sourceType = value->getType();
    llvm::LLVMContext& context = builder.getContext();

    // Если исходный тип совпадает с целевым, каст не нужен
    if (sourceType->isIntegerTy(1)) {
        return value;
    }

    // Преобразование float -> bool
    if (sourceType->isFloatingPointTy()) {
        return builder.CreateFCmpONE(value, llvm::ConstantFP::get(sourceType, 0.0), "floatToBool");
    }

    // Преобразование int -> bool
    if (sourceType->isIntegerTy(64)) {
        return builder.CreateICmpNE(value, llvm::ConstantInt::get(sourceType, 0), "intToBool");
    }

    // Преобразование string -> bool
    if (sourceType->isPointerTy()) {
        llvm::FunctionType* stringToBoolType =
            llvm::FunctionType::get(llvm::Type::getInt1Ty(context),
                {llvm::PointerType::get(llvm::Type::getInt8Ty(context), 0)}, false);
        llvm::FunctionCallee stringToBoolFunc = module.getOrInsertFunction("string_to_bool", stringToBoolType);
        return builder.CreateCall(stringToBoolFunc, {value});
    }

    throw std::runtime_error("Unsupported type cast.");
}

llvm::Value* stringCast(llvm::Value* value, llvm::IRBuilder<>& builder, llvm::Module& module) {
    llvm::LLVMContext& context = module.getContext();
    llvm::Type* ptrType        = llvm::PointerType::get(llvm::Type::getInt8Ty(context), 0);

    // Преобразование bool -> string
    if (value->getType()->isIntegerTy(1)) {
        llvm::FunctionType* boolToStringType =
            llvm::FunctionType::get(ptrType, {llvm::Type::getInt1Ty(context)}, false);
        llvm::FunctionCallee boolToStringFunc = module.getOrInsertFunction("bool_to_string", boolToStringType);
        return builder.CreateCall(boolToStringFunc, {value});
    }
    // Преобразование int -> string
    if (value->getType()->isIntegerTy(64)) {
        llvm::FunctionType* intToStringType =
            llvm::FunctionType::get(ptrType, {llvm::Type::getInt32Ty(context)}, false);
        llvm::FunctionCallee intToStringFunc = module.getOrInsertFunction("int_to_string", intToStringType);
        return builder.CreateCall(intToStringFunc, {value});
    }
    // Преобразование float -> string
    if (value->getType()->isFloatingPointTy()) {
        llvm::FunctionType* floatToStringType =
            llvm::FunctionType::get(ptrType, {llvm::Type::getDoubleTy(context)}, false);
        llvm::FunctionCallee floatToStringFunc = module.getOrInsertFunction("float_to_string", floatToStringType);
        return builder.CreateCall(floatToStringFunc, {value});
    }

    throw std::runtime_error("Unsupported type cast.");
}

char* stradd(char* left, char* right) {
    size_t lenLeft = 0;
    while (left[lenLeft] != '\0') {
        ++lenLeft;
    }
    size_t lenRight = 0;
    while (right[lenRight] != '\0') {
        ++lenRight;
    }

    // Выделяем новую память под итоговую строку (с учётом завершающего '\0')
    char* result = new char[lenLeft + lenRight + 1];

    // Копируем left
    for (size_t i = 0; i < lenLeft; ++i) {
        result[i] = left[i];
    }

    // Дописываем right
    for (size_t j = 0; j < lenRight; ++j) {
        result[lenLeft + j] = right[j];
    }

    // Ставим завершающий ноль
    result[lenLeft + lenRight] = '\0';

    return result;
}

llvm::Value* stringNeg(llvm::Module& module, llvm::IRBuilder<>& builder, llvm::Value* value) {
    llvm::LLVMContext& ctx     = module.getContext();
    llvm::Function* concatFunc = module.getFunction("strneg");
    if (!concatFunc) {
        auto charPtrTy                 = llvm::PointerType::get(llvm::Type::getInt8Ty(ctx), 0);
        llvm::FunctionType* strnegType = llvm::FunctionType::get(charPtrTy, {charPtrTy}, false);
        concatFunc = llvm::Function::Create(strnegType, llvm::Function::ExternalLinkage, "strneg", module);
    }

    return builder.CreateCall(concatFunc, {value});
}

char* strneg(char* str) {
    if (!str) {
        throw std::runtime_error("Invalid string value in negation expression");
    }

    size_t len = std::strlen(str);
    char* result = new char[len + 1];

    for (size_t i = 0; i < len; ++i) {
        result[i] = str[len - i - 1];
    }

    result[len] = '\0';

    return result;
}

llvm::Value* stringAdd(
    const std::unique_ptr<llvm::Module>& module, llvm::IRBuilder<>& builder, llvm::Value* left, llvm::Value* right) {
    llvm::LLVMContext& ctx     = module->getContext();
    llvm::Function* concatFunc = module->getFunction("stradd");
    if (!concatFunc) {
        auto charPtrTy                 = llvm::PointerType::get(llvm::Type::getInt8Ty(ctx), 0);
        llvm::FunctionType* strcatType = llvm::FunctionType::get(charPtrTy, {charPtrTy, charPtrTy}, false);
        concatFunc = llvm::Function::Create(strcatType, llvm::Function::ExternalLinkage, "stradd", *module);
    }

    return builder.CreateCall(concatFunc, {left, right}, "straddtmp");
}
llvm::Value* stringCompare(
    const std::unique_ptr<llvm::Module>& module, llvm::IRBuilder<>& builder, llvm::Value* left, llvm::Value* right) {
    llvm::Function* strcmpFunc = module->getFunction("strcmp");
    llvm::LLVMContext& context = module->getContext();
    if (!strcmpFunc) {
        llvm::FunctionType* strcmpType = llvm::FunctionType::get(llvm::Type::getInt32Ty(context), // Return type: int
            {llvm::PointerType::get(llvm::Type::getInt8Ty(context), 0),
                llvm::PointerType::get(llvm::Type::getInt8Ty(context), 0)}, // Parameters: char*, char*
            false);
        strcmpFunc = llvm::Function::Create(strcmpType, llvm::Function::ExternalLinkage, "strcmp", module.get());
    }

    return builder.CreateCall(strcmpFunc, {left, right});
}
