cmake_minimum_required(VERSION 3.14)

project(Numerics.Native VERSION 0.1 LANGUAGES CXX)

	set(SOURCES
		"src/Numerics.Native.cpp"
	)

	add_library(${PROJECT_NAME} STATIC ${SOURCES})
	target_include_directories(${PROJECT_NAME} PUBLIC "include")

add_subdirectory(libs)
add_subdirectory(tests)