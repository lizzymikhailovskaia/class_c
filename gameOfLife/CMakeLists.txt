cmake_minimum_required(VERSION 3.7)
project(gameOfLife)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        gameoflife.cpp)

add_executable(gameOfLife ${SOURCE_FILES})