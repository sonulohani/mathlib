cmake_minimum_required(VERSION 3.9)
project(mathlib VERSION 1.0.0 LANGUAGES CXX)

#Needs to be changed
set(DEFAULT_BUILD_TYPE "Debug")

# Find source files
file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

# Include header files
include_directories(include)

# Create shared library
#add_library(${PROJECT_NAME} SHARED ${SOURCES})

add_executable(${PROJECT_NAME} ${SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES VERSION ${PROJECT_VERSION})