cmake_minimum_required(VERSION 3.10)
project(VCVRadio)

set(CMAKE_CXX_STANDARD 11)

add_library(VCVRadio ikcp.cpp ikcp.h)