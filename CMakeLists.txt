cmake_minimum_required(VERSION 3.18)

project(kerberos)

include_directories(lib/char)

add_executable(main src/main.cpp src/char/kbr_char.cpp)