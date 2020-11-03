cmake_minimum_required(VERSION 3.17)
project(7)

set(CMAKE_CXX_STANDARD 14)

add_executable(7 main.cpp app/points2d.h app/impl/points2d.cpp)