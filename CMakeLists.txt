cmake_minimum_required(VERSION 3.14)
project(print_json)

if(CMAKE_SOURCE_DIR STREQUAL CMAKE_BINARY_DIR OR EXISTS "${CMAKE_BINARY_DIR}/CMakeLists.txt")
  message(FATAL_ERROR "In-source builds are not allowed.")
endif()

set(CMAKE_CXX_STANDARD 17)
set(SOURCES src/main.cpp)

find_package(cpprestsdk REQUIRED NAMES cpprestsdk cpprest)

add_executable(print_json ${SOURCES})
target_link_libraries(print_json PRIVATE cpprestsdk::cpprest cpprestsdk::cpprestsdk_zlib_internal cpprestsdk::cpprestsdk_boost_internal)
