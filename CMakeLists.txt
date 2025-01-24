cmake_minimum_required(VERSION 3.10)
project(FAMMCompiler)

set(CMAKE_CXX_STANDARD 20)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    if (CMAKE_COMPILER_IS_GNUCXX OR CMAKE_COMPILER_IS_CLANG)
        add_compile_options(-fsanitize=address -g)
        add_link_options(-fsanitize=address)
    endif()
endif()

add_subdirectory(lib)
add_subdirectory(bin)