cmake_minimum_required(VERSION 3.17)
project(PCXFormat)

set(CMAKE_CXX_STANDARD 14)

set(SOURCES pcx_format.c)
set(HEADERS pcx_format.h)
#add_library(sorting ${SOURCES} ${HEADERS})
#add_library(sorting_tests ${TESTS})

add_executable(PCXFormat ${SOURCES})