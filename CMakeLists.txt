cmake_minimum_required(VERSION 3.7)
project(program_team_1 C)
add_subdirectory(src)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Ofast -Wall")
