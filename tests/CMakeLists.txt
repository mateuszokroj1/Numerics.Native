project(Numerics.Native.Tests)

set(test_files
    src/test1.cpp
)

#set(TEST_WORKING_DIRECTORY "${PROJECT_DIR}/data")

include(FetchContent)

FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(${PROJECT_NAME} ${test_files})

    target_link_libraries(${PROJECT_NAME} gtest_main)

    add_test(NAME test1 COMMAND test1)