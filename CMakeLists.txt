cmake_minimum_required(VERSION 3.24)
project(mephi_labs)

set(CMAKE_CXX_STANDARD 17)

add_executable(mephi_labs main.cpp Bmp_reader.cpp cmake-build-debug/RGB.cpp cmake-build-debug/RGB.h cmake-build-debug/Image.cpp cmake-build-debug/Image.h)
