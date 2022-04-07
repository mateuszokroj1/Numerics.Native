cmake_minimum_required(VERSION 3.2)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

set(CMAKE_STATIC_LIBRARY_PREFIX "")
set(CMAKE_SHARED_LIBRARY_PREFIX "")

enable_testing()
add_subdirectory(tests)

project(Numerics.Native VERSION 0.1 LANGUAGES C CXX)

	set(CXX_STANDARD 20)

	set(SOURCES
		"src/Numerics.Native.cpp"
		"src/core.cpp"
	)

	add_library(${PROJECT_NAME} SHARED ${SOURCES})
	target_include_directories(${PROJECT_NAME} PUBLIC "include" PUBLIC ${Numerics.Native_BINARY_DIR})

	if (WIN32)
		include (GenerateExportHeader)          
		GENERATE_EXPORT_HEADER(${PROJECT_NAME}
             BASE_NAME ${PROJECT_NAME}
             EXPORT_MACRO_NAME NUMERICS_NATIVE_EXPORT
             EXPORT_FILE_NAME Numerics_Native_Export.h
             STATIC_DEFINE Numerics.Native_BUILT_AS_STATIC)
	endif ()

	set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)

	install(TARGETS ${PROJECT_NAME} EXPORT Numerics_Native_Targets
		LIBRARY DESTINATION lib
		RUNTIME DESTINATION bin
		ARCHIVE DESTINATION lib
	)
	install(
		DIRECTORY ${CMAKE_SOURCE_DIR}/include/ DESTINATION include FILES_MATCHING PATTERN "*.h*"
	)
	install(
		FILES ${CMAKE_BINARY_DIR}/Numerics_Native_Export.h DESTINATION include
	)

	include(CMakePackageConfigHelpers)
	export(EXPORT Numerics_Native_Targets
		FILE "${CMAKE_CURRENT_BINARY_DIR}/cmake/Numerics_Native_Targets.cmake"
	)
	configure_file(cmake/Numerics_Native_Config.cmake
		"${CMAKE_CURRENT_BINARY_DIR}/cmake/Numerics_Native_Config.cmake"
	)

	install(FILES
		cmake/Numerics_Native_Config.cmake
		"${CMAKE_CURRENT_BINARY_DIR}/cmake/Numerics_Native_Targets.cmake"
		DESTINATION
		cmake/
	)