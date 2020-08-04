cmake_minimum_required(VERSION 3.17)
project(Sort)

set(CMAKE_CXX_STANDARD 14)

set(SOURCES bubble_sort.c)
set(HEADERS bubble_sort.h)
set(TESTS bubble_sort_test.c)
add_library(lib ${SOURCES} ${HEADERS})

add_executable(Sort ${TESTS})