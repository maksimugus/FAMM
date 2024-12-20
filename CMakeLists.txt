cmake_minimum_required(VERSION 3.5)
project(FAMMCompiler)

set(CMAKE_CXX_STANDARD 20)

# Define the directory containing ANTLR4
set(ANTLR_RUNTIME_DIR ${CMAKE_SOURCE_DIR}/third_party/antlr4/runtime/Cpp)

# Add the ANTLR4 runtime subdirectory
add_subdirectory(${ANTLR_RUNTIME_DIR} EXCLUDE_FROM_ALL)

# Include necessary directories for frontend
add_library(frontend
        lib/frontend/gen/FAMM.tokens
        lib/frontend/gen/FAMMBaseListener.cpp
        lib/frontend/gen/FAMMLexer.cpp
        lib/frontend/gen/FAMMListener.cpp
        lib/frontend/gen/FAMMParser.cpp
        lib/frontend/gen/FAMMBaseListener.h
        lib/frontend/gen/FAMMLexer.h
        lib/frontend/gen/FAMMListener.h
        lib/frontend/gen/FAMMParser.h
        lib/frontend/gen/FAMMLexer.tokens
        lib/frontend/gen/FAMMLexer.interp
)

# Include directories for frontend and ANTLR4 runtime
include_directories(lib/frontend/gen)
include_directories(${ANTLR_RUNTIME_DIR}/runtime/src)

# Create the executable
add_executable(famm_compiler bin/main.cpp)

# Link the frontend library
target_link_libraries(famm_compiler frontend)
target_link_libraries(famm_compiler antlr4_static)

# If using LLVM, link it as needed (if required for your project)
# target_link_libraries(famm_compiler LLVM)
