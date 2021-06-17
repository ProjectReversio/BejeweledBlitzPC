cmake_minimum_required(VERSION 3.18)

project(BejeweledBlitz)

set(BuildDemos OFF)

if (EXISTS "${CMAKE_SOURCE_DIR}/libs/SexyAppFramework/CMakeLists.txt")
	add_subdirectory(libs/SexyAppFramework)
else()
	message( FATAL_ERROR "Can't find submodule for SexyAppFramework! Run ``git submodule update --init --recursive``")
endif()

# For some reason this doesn't automatically get set on the Bejeweled Project. TODO: Figure it out later
if (${WideStrings})
	add_compile_definitions(_USE_WIDE_STRING)
endif()

add_subdirectory(src)
