cmake_minimum_required(VERSION 3.10)
project(DoublePendulumSimulation LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# --- Collect all source files ---
set(SOURCES main.cpp)
file(GLOB SRC_FILES src/*.cpp)
list(APPEND SOURCES ${SRC_FILES})

# --- Add executable ---
add_executable(simulation ${SOURCES})
target_include_directories(simulation PRIVATE src)
