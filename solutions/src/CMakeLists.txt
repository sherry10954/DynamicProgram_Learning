include_directories(${PROJECT_SOURCE_DIR}/solutions/inc)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
add_library(DynamicSolve SHARED DynamicSolve.cpp)