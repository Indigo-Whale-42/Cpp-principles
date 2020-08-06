cmake_minimum_required(VERSION 3.17)
project(Sort)

set(CMAKE_CXX_STANDARD 14)

set(SOURCES bubble_sort.c common.c)
set(HEADERS common.h sort.h)
set(TESTS sort_test.c)
#add_library(sorting ${SOURCES} ${HEADERS})
#add_library(sorting_tests ${TESTS})

add_executable(Sort main.c ${SOURCES} ${TESTS})