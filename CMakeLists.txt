cmake_minimum_required(VERSION 3.10)
project(LibraryManagementSystem)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add source files
add_executable(library_system
    src/main.cpp
)

# Include directories
target_include_directories(library_system PRIVATE
    ${CMAKE_SOURCE_DIR}/src
)
