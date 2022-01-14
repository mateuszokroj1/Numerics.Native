cmake_minimum_required(VERSION 3.2)

project(Numerics.Native VERSION 0.1 LANGUAGES CXX)

	set(SOURCES
		"src/Numerics.Native.cpp"
	)

	add_library(${PROJECT_NAME} STATIC ${SOURCES})
	target_include_directories(${PROJECT_NAME} PRIVATE "include" "libs/googletest/googletest/include")
	target_link_directories(${PROJECT_NAME} PRIVATE ${GTEST_BINARY_DIR})

	add_subdirectory("libs/googletest/googletest")