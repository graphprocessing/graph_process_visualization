cmake_minimum_required(VERSION 2.8.8)
project(visualizer)

set(CMAKE_AUTOMOC ON)
cmake_policy(SET CMP0020 NEW)
cmake_policy(SET CMP0043 NEW)
if (MSVC)
    cmake_policy(SET CMP0079 NEW)
endif (MSVC)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

include_directories(include)

add_subdirectory(app)

qt5_use_modules(visualizer Widgets)
