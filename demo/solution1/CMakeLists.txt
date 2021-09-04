set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
link_directories(${PROJECT_SOURCE_DIR}/lib)
add_executable(solution1 solution1.cpp)
target_link_libraries(solution1 DynamicSolve)