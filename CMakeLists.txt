cmake_minimum_required(VERSION 3.10)
project(cpp_study)

set(CMAKE_CXX_STANDARD 11)

add_executable(cpp_study main.cpp sort.cpp)
add_executable(sort sort.cpp)
add_executable(set set.cpp)
add_executable(helloworld helloworld.cpp)

add_subdirectory(c_cpp_sample)
add_subdirectory(jansson_json)
add_subdirectory(libcurl)
add_subdirectory(operator)