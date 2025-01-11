cmake_minimum_required(VERSION 3.10)

# Путь до ANTLR4 runtime
set(ANTLR_RUNTIME_DIR ${CMAKE_SOURCE_DIR}/third_party/antlr4/runtime/Cpp)
set(ANTLR4_INCLUDE_DIRS ${ANTLR_RUNTIME_DIR})

# Добавляем ANTLR4 runtime как поддиректорию
add_subdirectory(${ANTLR_RUNTIME_DIR} ${CMAKE_BINARY_DIR}/antlr4_runtime EXCLUDE_FROM_ALL)

add_library(frontend STATIC
        gen/FAMM.tokens
        gen/FAMMBaseListener.cpp
        gen/FAMMLexer.cpp
        gen/FAMMListener.cpp
        gen/FAMMParser.cpp
        gen/FAMMBaseListener.h
        gen/FAMMLexer.h
        gen/FAMMListener.h
        gen/FAMMParser.h
        gen/FAMMLexer.tokens
        gen/FAMMLexer.interp
)

target_include_directories(frontend PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/gen
        ${ANTLR_RUNTIME_DIR}/runtime/src
)

# Указываем, что библиотека frontend зависит от antlr4_static
target_link_libraries(frontend antlr4_static)
