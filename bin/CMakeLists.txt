add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE
        ${PROJECT_SOURCE_DIR}/lib/fammfrontend-cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE
        lexer
        parser
        base_listener
        listener
        antlr4-runtime 
)
