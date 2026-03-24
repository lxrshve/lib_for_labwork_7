cmake_minimum_required(VERSION 3.10)
project(PrintLib)

add_library(print INTERFACE)
target_include_directories(print INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})