cmake_minimum_required (VERSION 3.12)
project (Example VERSION 1.0.0)

add_subdirectory(good-bye)

add_library(
	say-hello
	hello.hpp 
	hello.cpp
)

add_executable (main main.cpp)

target_link_libraries(
	main PRIVATE 
	say-hello
	say-goodbye
)
