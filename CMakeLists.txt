cmake_minimum_required(VERSION 3.0)
project(mandelbrot C)

set(CMAKE_C_STANDARD 17)

add_executable(mandelbrot
        mandelbrot.c
        mandelbrot.h
        image_handler.c
        image_handler.h
        complex.c
        complex.h)

link_directories(/usr/lib)
target_link_libraries (mandelbrot freeimage)

target_link_libraries(mandelbrot)
