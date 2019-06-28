cmake_minimum_required(VERSION 2.8.8)
project(visualizer)

file(GLOB_RECURSE sources "src/*.cpp")
file(GLOB_RECURSE headers "include/*.h")

set(CMAKE_AUTOMOC ON)
cmake_policy(SET CMP0020 NEW)
cmake_policy(SET CMP0043 NEW)
if(${CMAKE_VERSION} VERSION_GREATER "3.13.0") 
    cmake_policy(SET CMP0079 NEW)
endif()

find_package(Qt5 REQUIRED COMPONENTS Widgets)

include("${PROJECT_SOURCE_DIR}/cmake/config.cmake")
add_executable(visualizer app/main.cpp ${sources} ${headers})

include_directories(include)

qt5_use_modules(visualizer Widgets)
