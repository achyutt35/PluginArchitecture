cmake_minimum_required(VERSION 3.19.2)

add_subdirectory("/Users/achyutt/Plugin/Engine/src")

project("PluginArchitecture")
add_executable("Main" "/Users/achyutt/Plugin/Client/main.c")

target_link_libraries("Main" PRIVATE "Plugin")