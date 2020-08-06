cmake_minimum_required(VERSION 3.17)
project(Sort)

set(CMAKE_CXX_STANDARD 14)

set(SOURCES bubble_sort.c sort_common.c cocktail_sort.c selection_sort.c insertion_sort.c shell_sort.c comb_sort.c merge_sort.c)
set(HEADERS sort_common.h sort.h)
set(TESTS sort_test.c)
#add_library(sorting ${SOURCES} ${HEADERS})
#add_library(sorting_tests ${TESTS})

add_executable(Sort main.c ${SOURCES} ${TESTS})