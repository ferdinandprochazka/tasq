# CMake Version
cmake_minimum_required(VERSION 3.5)

# Constants
set(PROJECT_NAME "tasq")

# Project Name
project(${PROJECT_NAME})

# File Globs
file(GLOB HEADERS_FILES src/**/*.c)
file(GLOB SOURCES_FILES src/**/*.c)

# Executable
add_executable(
  ${PROJECT_NAME}
  src/Main.c
  ${HEADERS_FILES}
  ${SOURCES_FILES}
)
