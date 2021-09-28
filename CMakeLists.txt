cmake_minimum_required(VERSION 3.16)

project(Tutorial VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)

configure_file(${PROJECT_SOURCE_DIR}/tutorialConfig.h.in ${PROJECT_SOURCE_DIR}/tutorialConfig.h)

add_executable(Tutorial tutorial.cpp)