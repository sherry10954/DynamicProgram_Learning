cmake_minimum_required(VERSION 3.19)
project(DynamicProgram_Learning)

set(CMAKE_CXX_STANDARD 14)
include_directories(
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/solutions/inc
)
add_subdirectory(solutions)
add_subdirectory(demo)