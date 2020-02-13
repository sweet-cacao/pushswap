cmake_minimum_required(VERSION 3.15)
project(fdf_tutorial C)

set(CMAKE_C_STANDARD 99)

add_executable(fdf_tutorial main2.c fdf.h read_file.c draw.c)