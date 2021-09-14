cmake_minimum_required(VERSION 3.20)
project("things_I_studied")

include_directories("${PROJECT_SOURCE_DIR}/*")

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

add_executable(3 "코딩테스트를 위한 자료 구조와 알고리즘 with C++/1장/3.cpp")
add_executable(5 "코딩테스트를 위한 자료 구조와 알고리즘 with C++/2장/5.cpp")
add_executable(2512 백준/2512/2512.cpp)
add_executable(2485 백준/2485/2485.cpp)
add_executable(2512-1 백준/2512/2512-1.cpp)
add_executable(2217 백준/2217/2217.cpp)
add_executable(20 "코딩테스트를 위한 자료 구조와 알고리즘 with C++/8장/20.cpp")
add_executable(playground etc/playground.cpp)
add_executable(17626 백준/17626/17626.cpp)