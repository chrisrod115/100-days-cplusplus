cmake_minimum_required(VERSION 3.5)
project(TipCalculator)

# Add the source files
set(SOURCES 
    src/tip_calculator.cpp
)

# Add the executable
add_executable(MyApp ${SOURCES})

# Include directories
include_directories(include)

# Add Google Test
add_subdirectory(googletest)

# Link Google Test libraries
target_link_libraries(MyApp gtest gtest_main)

# Add test executable
add_executable(TestRunner tests/tip_calculator_test.cpp)

# Link test executable with Google Test and your code
target_link_libraries(TestRunner gtest gtest_main)
target_link_libraries(TestRunner ${CMAKE_PROJECT_NAME})
