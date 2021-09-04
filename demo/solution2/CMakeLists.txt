set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
link_directories(${PROJECT_SOURCE_DIR}/lib)
add_executable(solution2 solution2.cpp)
target_link_libraries(solution2 DynamicSolve)