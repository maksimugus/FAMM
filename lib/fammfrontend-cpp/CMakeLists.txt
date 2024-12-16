add_library(lexer FammLexer.cpp)
add_library(parser FammParser.cpp)
add_library(listener FammBaseListener.cpp)
add_library(base_listener FammBaseListener.cpp)

target_include_directories(lexer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(parser PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(listener PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(base_listener PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

find_package(antlr4-runtime REQUIRED)

target_link_libraries(lexer PRIVATE antlr4-runtime)
target_link_libraries(parser PRIVATE antlr4-runtime lexer)
target_link_libraries(listener PRIVATE antlr4-runtime)
target_link_libraries(base_listener PRIVATE antlr4-runtime)
