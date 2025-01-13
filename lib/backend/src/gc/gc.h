#pragma once
#include <llvm/CodeGen/GCMetadata.h>
#include <llvm/CodeGen/GCMetadataPrinter.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/Module.h>
#include <llvm/Support/Compiler.h>
#include <unordered_map>
#include <vector>

// Создаем свой класс для печати метаданных GC
class CustomGCMetadataPrinter final : public llvm::GCMetadataPrinter {
public:
    void beginAssembly(llvm::Module& M, llvm::GCModuleInfo& Info, llvm::AsmPrinter& AP) override {}
    void finishAssembly(llvm::Module& M, llvm::GCModuleInfo& Info, llvm::AsmPrinter& AP) override {}
};

// Регистрируем принтер метаданных
static llvm::GCMetadataPrinterRegistry::Add<CustomGCMetadataPrinter> Y("custom-gc", "Custom GC Metadata Printer");

// Обновляем класс CustomGCStrategy
class CustomGCStrategy final : public llvm::GCStrategy {
public:
    CustomGCStrategy() {
        UsesMetadata = true;
        // Указываем, что используем свой принтер метаданных
        NeededSafePoints = true;
    }
};

// Регистрация стратегии остается той же
static llvm::GCRegistry::Add<CustomGCStrategy> X("custom-gc", "Custom garbage collector implementation");

class CustomGC {
    struct GCNode {
        void* ptr{};
        size_t size{};
        bool marked{};
        std::vector<void*> references;
    };

    std::unordered_map<void*, GCNode> allocatedObjects;
    std::vector<void*> roots;

public:
    static void* allocateMemory(size_t size);

    static void addRoot(void* ptr);

    static void removeRoot(void* ptr);

    void mark(void* ptr);

    void sweep();

    void collect();

    static CustomGC& getInstance();
};
