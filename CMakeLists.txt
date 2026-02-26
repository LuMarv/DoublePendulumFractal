cmake_minimum_required(VERSION 3.10)
project(DoublePendulumSimulation LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# --- googletest ---
add_subdirectory(googletest)
enable_testing()

# --- Library ---
file(GLOB SRC_FILES src/*.cpp)

add_library(simulation_lib ${SRC_FILES})

target_include_directories(simulation_lib PUBLIC ${PROJECT_SOURCE_DIR}/include)

# --- Main executable ---
add_executable(simulation main.cpp)
target_link_libraries(simulation PRIVATE simulation_lib)

# --- Tests ---
add_executable(tests gtests/test.cpp)

target_link_libraries(tests PRIVATE simulation_lib gtest_main)

target_include_directories(tests PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_test(NAME TESTS COMMAND tests)
