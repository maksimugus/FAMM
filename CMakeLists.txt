cmake_minimum_required(VERSION 3.2)
project(FAMMCompiler)

set(CMAKE_CXX_STANDARD 20)

# Определяем директорию ANTLR
set(ANTLR_RUNTIME_DIR ${CMAKE_SOURCE_DIR}/third_party/antlr4/runtime/Cpp)

# Добавляем ANTLR4 runtime
add_subdirectory(${ANTLR_RUNTIME_DIR} EXCLUDE_FROM_ALL)

# Подключаем директорию lib/frontend
add_subdirectory(lib/frontend)

add_subdirectory(bin)

cmake_minimum_required(VERSION 3.2)

# Поиск LLVM
find_package(LLVM REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

# Добавляем определения и директории LLVM
include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})
# Собираем исходные файлы в backend/src
#file(GLOB_RECURSE BACKEND_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

# Создаем библиотеку backend
add_library(backend STATIC
        lib/backend/src/FAMMIRGenerator.cpp
        lib/backend/src/FAMMIRGenerator.h
        lib/backend/src/Visitors/Visitor.cpp
        lib/backend/src/Visitors/Visitor.h)

# Указываем компоненты LLVM, которые вам нужны
set(LLVM_COMPONENTS
        Core
        Support
        # Добавьте другие необходимые компоненты LLVM
)

# Преобразуем компоненты LLVM в имена библиотек
llvm_map_components_to_libnames(LLVM_LIBS ${LLVM_COMPONENTS})
# Линкуем библиотеку backend с библиотеками LLVM
target_link_libraries(backend ${LLVM_LIBS})

# Добавляем директории включения и определения компилятора
target_include_directories(backend PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${LLVM_INCLUDE_DIRS}
)
target_compile_definitions(backend PUBLIC ${LLVM_DEFINITIONS})

target_link_libraries(backend frontend)