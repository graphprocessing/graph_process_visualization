cmake_minimum_required(VERSION 2.8.8)
project(hello-world)

set(CMAKE_AUTOMOC ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

add_executable(visualizer src/main.cpp src/mainwindow.cpp include/mainwindow.h)
include_directories(include)

qt5_use_modules(visualizer Widgets)
