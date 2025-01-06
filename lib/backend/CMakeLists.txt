find_package(LLVM REQUIRED CONFIG)

if (NOT LLVM_FOUND)
    message(FATAL_ERROR "LLVM not found. Please install LLVM or set the path correctly.")
endif()

# Specify the LLVM components you need
llvm_map_components_to_libnames(LLVM_LIBS Core)

# Specify the source files for the backend library
set(SOURCE_FILES
        src/Nothing.cpp
)

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
)

target_link_libraries(backend frontend)