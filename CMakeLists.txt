cmake_minimum_required(VERSION 3.5)
project(FAMMCompiler)

set(CMAKE_CXX_STANDARD 20)

# Указываем директорию с ANTLR4
set(ANTLR_RUNTIME_DIR ${CMAKE_SOURCE_DIR}/third_party/antlr4-cpp-runtime)
set(LLVM_DIR ${CMAKE_SOURCE_DIR}/third_party/llvm)

# Добавляем подкаталог ANTLR4
add_subdirectory(${ANTLR_RUNTIME_DIR} EXCLUDE_FROM_ALL)

# Подключаем нужные исходники для frontend
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

# Включаем директории для frontend
include_directories(lib/frontend/gen)

# Включаем директории для ANTLR4
include_directories(${ANTLR_RUNTIME_DIR}/runtime/src)

# Добавляем библиотеку backend (если необходимо)
# add_library(backend lib/backend/...)

# Включаем директории для LLVM
include_directories(${LLVM_DIR}/include)

# Создаем исполняемый файл
add_executable(famm_compiler bin/main.cpp)

# Линкуем с библиотеками
target_link_libraries(famm_compiler frontend backend)

# Линкуем с библиотекой ANTLR4
target_link_libraries(famm_compiler antlr4_cpp_runtime)

# Линкуем с библиотекой LLVM
target_link_libraries(famm_compiler LLVM)
