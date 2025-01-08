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
