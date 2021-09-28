cmake_minimum_required(VERSION 3.16)

project(Tutorial VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)

option(USE_MYMATH "Use tutorial provided math implementation" ON)

configure_file(${PROJECT_SOURCE_DIR}/tutorialConfig.h.in ${PROJECT_SOURCE_DIR}/tutorialConfig.h)

if(USE_MYMATH)
    add_subdirectory(MathFunctions)
    list(APPEND EXTRA_LIBS MathFunctions)
    list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/MathFunctions")
endif()

add_executable(Tutorial tutorial.cpp)

target_link_libraries(Tutorial PUBLIC ${EXTRA_LIBS})

target_include_directories(Tutorial PUBLIC "${PROJECT_SOURCE_DIR}" ${EXTRA_INCLUDES})