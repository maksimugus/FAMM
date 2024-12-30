cmake_minimum_required(VERSION 3.2)

# Создаем исполняемый файл из main.cpp
add_executable(${PROJECT_NAME} main.cpp)

# Линкуем frontend, backend и antlr4_static к исполняемому файлу
target_link_libraries(${PROJECT_NAME} PRIVATE frontend backend antlr4_static)

# Указываем, что main.cpp может использовать общие заголовочные файлы проекта
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})