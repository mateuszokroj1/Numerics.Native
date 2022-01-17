cmake_minimum_required(VERSION 3.21)

project(Numerics.Native VERSION 0.1 LANGUAGES C CXX)

	set(SOURCES
		"src/Numerics.Native.cpp"
	)

	add_library(${PROJECT_NAME} ${SOURCES})
	target_include_directories(${PROJECT_NAME} PUBLIC "include")

option(PACKAGE_TESTS "Build the tests" ON)
if(PACKAGE_TESTS)
    enable_testing()
	#find_package(GTest COMPONENTS GTest::gtest GTest::gtest_main)
    #include(GoogleTest)
    add_subdirectory(tests)
endif()