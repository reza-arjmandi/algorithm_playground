cmake_minimum_required(VERSION 3.1)

project(algorithm_playground)

add_executable(linear_search search/linear_search.cpp)
add_executable(linear_search_improved search/linear_search_improved.cpp)
add_executable(binary_search search/binary_search.cpp)
add_executable(binary_search_iterative search/binary_search_iterative.cpp)
add_executable(jump_search search/jump_search.cpp)
add_executable(interpolation_search search/interpolation_search.cpp)
add_executable(exponential_search search/exponential_search.cpp)
add_executable(ternary_search search/ternary_search.cpp)

add_executable(selection_sort sort/selection_sort.cpp)
add_executable(bubble_sort sort/bubble_sort.cpp)
add_executable(bubble_sort_optimized sort/bubble_sort_optimized.cpp)
add_executable(insertion_sort sort/insertion_sort.cpp)