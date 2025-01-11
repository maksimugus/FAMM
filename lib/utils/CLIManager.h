#pragma once
#include <string>
#include <vector>
#include <iostream>

class CLIManager {
public:
    CLIManager(int argc, const char* argv[]);
    ~CLIManager() = default;

    [[nodiscard]] bool compile() const { return compile_; }
    [[nodiscard]] const std::string& compileFile() const { return compileFile_; }
    [[nodiscard]] const std::string& inputFile() const { return inputFile_; }
    [[nodiscard]] bool printUnoptimized() const { return printUnoptimized_; }
    [[nodiscard]] bool optimize() const { return optimize_; }
    [[nodiscard]] bool printOptimized() const { return printOptimized_; }
    [[nodiscard]] bool printTree() const { return printTree_; }

private:
    void parseArgs(int argc, const char* argv[]);
    static void printHelp();

    bool compile_ = false;
    std::string compileFile_;
    std::string inputFile_;
    bool printUnoptimized_ = false;
    bool optimize_ = true;
    bool printOptimized_ = false;
    bool printTree_ = false;
};
