cmake_minimum_required(VERSION 3.5)
project(FAMMCompiler)


#set(CMAKE_CXX_COMPILER_LAUNCHER ccache)
set(CMAKE_CXX_STANDARD 20)

# Определяем директорию ANTLR
set(ANTLR_RUNTIME_DIR ${CMAKE_SOURCE_DIR}/third_party/antlr4/runtime/Cpp)

# Добавляем ANTLR4 runtime
add_subdirectory(${ANTLR_RUNTIME_DIR} EXCLUDE_FROM_ALL)

# Подключаем директорию lib/frontend
add_subdirectory(lib/frontend)

# Создаем исполняемый файл
add_executable(famm_compiler bin/main.cpp)

# Линкуем frontend и antlr4_static к исполняемому файлу
target_link_libraries(famm_compiler frontend)
target_link_libraries(famm_compiler antlr4_static)
