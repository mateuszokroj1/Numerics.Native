cmake_minimum_required(VERSION 3.2)

project(Numerics.Native VERSION 0.1 LANGUAGES C CXX)

	set(SOURCES
		"src/Numerics.Native.cpp"
		"src/core.cpp"
	)

	add_library(${PROJECT_NAME} SHARED ${SOURCES})
	target_include_directories(${PROJECT_NAME} PUBLIC "include")

option(PACKAGE_TESTS "Build the tests" ON)
if(PACKAGE_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()