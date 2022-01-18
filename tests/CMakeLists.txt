project(Numerics.Native.Tests)

set(test_files
    src/test1.cpp
)

if(WIN32)

    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

endif()

add_executable(${PROJECT_NAME} ${test_files})

    target_link_libraries(${PROJECT_NAME} gtest_main Numerics.Native)

    add_test(NAME TestGroup COMMAND "Test")

add_subdirectory("libs/gtest")