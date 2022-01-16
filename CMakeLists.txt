cmake_minimum_required(VERSION 3.14)

project(Numerics.Native VERSION 0.1 LANGUAGES CXX)

	add_subdirectory("libs/gtest")

	set(SOURCES
		"src/Numerics.Native.cpp"
	)

	add_library(${PROJECT_NAME} ${SOURCES})
	target_include_directories(${PROJECT_NAME} PUBLIC "include")

option(PACKAGE_TESTS "Build the tests" ON)
if(PACKAGE_TESTS)
    enable_testing()
    include(GoogleTest)
    add_subdirectory(tests)
endif()