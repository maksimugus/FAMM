cmake_minimum_required(VERSION 3.24)

project(
        FAMM
        VERSION 1.0
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_PREFIX_PATH "")

find_package(antlr4-runtime)

add_subdirectory(bin)
add_subdirectory(lib/fammfrontend-cpp)
