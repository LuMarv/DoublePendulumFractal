cmake_minimum_required(VERSION 3.10)
project(DoublePendulumSimulation LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# --- Option to select the integrator ---
set(INTEGRATOR "EULER" CACHE STRING "Choose integrator: EULER or nothing")
set_property(CACHE INTEGRATOR PROPERTY STRINGS EULER)

# --- Compiler define based on choice ---
if(INTEGRATOR STREQUAL "EULER")
    add_compile_definitions(USE_EULER)
else()
    message(FATAL_ERROR "Unknown integrator: ${INTEGRATOR}")
endif()

# --- Collect all source files ---
set(SOURCES main.cpp)
file(GLOB SRC_FILES src/*.cpp)
list(APPEND SOURCES ${SRC_FILES})

# --- Add executable ---
add_executable(double_pendulum ${SOURCES})
target_include_directories(double_pendulum PRIVATE src)
