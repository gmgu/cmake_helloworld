add_library(
	say-goodbye
	src/goodbye.hpp
	src/goodbye.cpp
)

target_include_directories(
	say-goodbye PUBLIC
	"${CMAKE_CURRENT_SOURCE_DIR}/src"
)
