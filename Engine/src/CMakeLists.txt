cmake_minimum_required(VERSION 3.13)
project("Plugin")

add_library("Plugin" SHARED plugin.c)
# target_include_directories("libPlugin.dylib" INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}")