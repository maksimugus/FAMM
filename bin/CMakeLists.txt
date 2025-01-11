cmake_minimum_required(VERSION 3.2)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE frontend backend utils)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})