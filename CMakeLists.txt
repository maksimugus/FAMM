cmake_minimum_required(VERSION 3.2)
project(FAMMCompiler)

set(CMAKE_CXX_STANDARD 20)

# Определяем директорию ANTLR
set(ANTLR_RUNTIME_DIR ${CMAKE_SOURCE_DIR}/third_party/antlr4/runtime/Cpp)
set(ANTLR4_INCLUDE_DIRS ${ANTLR_RUNTIME_DIR})

# Добавляем ANTLR4 runtime
add_subdirectory(${ANTLR_RUNTIME_DIR} EXCLUDE_FROM_ALL)

# Подключаем директорию lib/frontend
add_subdirectory(lib/frontend)

# Подключаем директорию lib/backend
add_subdirectory(lib/backend)

add_subdirectory(bin)