#include "CLIManager.h"

CLIManager::CLIManager(const int argc, const char* argv[]) {
    parseArgs(argc, argv);
}

void CLIManager::parseArgs(const int argc, const char* argv[]) {
    for (int i = 1; i < argc; ++i) {
        if (std::string arg = argv[i]; arg == "--compile" && i + 1 < argc) {
            compile_     = true;
            compileFile_ = argv[++i];
        } else if (arg == "--file" && i + 1 < argc) {
            inputFile_ = argv[++i];
        } else if (arg == "--printAll") {
            printOptimized_   = true;
            printTree_        = true;
            printUnoptimized_ = true;
        } else if (arg == "--printUnoptimized") {
            printUnoptimized_ = true;
        } else if (arg == "--noOptimize") {
            optimize_ = false;
        } else if (arg == "--printOptimized") {
            printOptimized_ = true;
        } else if (arg == "--printTree") {
            printTree_ = true;
        } else if (arg == "--help") {
            printHelp();
        } else {
            std::cerr << "Unknown argument: " << arg << std::endl;
        }
    }
}

void CLIManager::printHelp() {
    std::cout << "Usage: program [OPTIONS]\n\n"
              << "Options:\n"
              << "  --help                 Show this help message and exit\n"
              << "  --compile <file>       Compile the specified file\n"
              << "  --file <file>          Specify the input file\n"
              << "  --printAll             Print all information (unoptimized, optimized, tree)\n"
              << "  --printUnoptimized     Print unoptimized code\n"
              << "  --noOptimize           Dont optimize the code\n"
              << "  --printOptimized       Print optimized code\n"
              << "  --printTree            Print the abstract syntax tree\n"
              << std::endl;
}
