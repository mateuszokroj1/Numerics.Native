project(Numerics.Native.Tests)

set(test_files
    src/test1.cpp
)

set(ProjectName Numerics.Native.Tests)
set(TEST_WORKING_DIRECTORY "${PROJECT_DIR}/data")

add_executable(${ProjectName} ${test_files})

    target_include_directories(${ProjectName} PRIVATE ${GTEST_INCLUDE_DIRS})

    gtest_discover_tests(${ProjectName}
        WORKING_DIRECTORY ${TEST_WORKING_DIRECTORY}
        PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${TEST_WORKING_DIRECTORY}"
    )