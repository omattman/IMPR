cmake_minimum_required(VERSION 3.12)
project(AO4 C)

set(CMAKE_C_STANDARD 99)

add_executable(AO4 main.c
               disc-root-calculations.c
               disc-root-calculations.h)