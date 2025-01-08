find_package(LLVM REQUIRED CONFIG)

if (NOT LLVM_FOUND)
    message(FATAL_ERROR "LLVM not found. Please install LLVM or set the path correctly.")
endif()

# Specify the LLVM components you need
llvm_map_components_to_libnames(LLVM_LIBS Core)

# Specify the source files for the backend library
set(SOURCE_FILES
        src/visitors/Visitor.cpp
        src/visitors/Visitor.h
        src/Scope.h
        src/visitors/VisitExpression.cpp
        src/visitors/CreateComparison.cpp
        src/visitors/VisitType.cpp
        src/visitors/VisitProgram.cpp
        src/visitors/VisitBlock.cpp
        src/visitors/VisitStatement.cpp)

# Create the static backend library
add_library(backend STATIC ${SOURCE_FILES})

# Include LLVM headers
target_include_directories(backend PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${LLVM_INCLUDE_DIRS}
)

# Include LLVM definitions
target_compile_definitions(backend PRIVATE ${LLVM_DEFINITIONS})

# Link the backend library to the correct LLVM libraries
target_link_libraries(backend PRIVATE
        ${LLVM_LIBS}
        frontend
)