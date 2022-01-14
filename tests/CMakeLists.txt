project(Numerics.Native.Tests)

add_subdirectory("libs/gtest")

set(test_files
    src/core.cpp
)

add_executable(${PROJECT_NAME} ${test_files})

    target_link_libraries(${PROJECT_NAME} Numerics.Native GTest::gtest_main)

    set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)

    include(GoogleTest)
    gtest_discover_tests(${PROJECT_NAME})

    add_custom_command ( TARGET ${PROJECT_NAME} PRE_BUILD
		COMMAND ${CMAKE_COMMAND} -E copy_if_different
		$<TARGET_FILE:Numerics.Native> $<TARGET_FILE_DIR:Numerics.Native.Tests>
	)