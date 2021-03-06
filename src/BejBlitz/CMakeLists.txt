cmake_minimum_required(VERSION 3.18)

project(BejBlitz)

include_directories(${CMAKE_SOURCE_DIR}/libs/SexyAppFramework/source/)

set (SRC_MAIN
	# Sources
	main.cpp
	Bej3App.cpp
	SexyApp.cpp
	InternetManager.cpp
	AdInstance.cpp
	BetaSupport.cpp
	WinInetHTTPTransfer.cpp
	PopDRMComm.cpp
	GraphicsRecorder.cpp
	Resources.cpp
	MainMenu.cpp
	Bej3ButtonListener.cpp
	CurvedVal.cpp
	SexyCache.cpp
	CustomBassMusicInterface.cpp
	SexyMathHermite.cpp
	
	# Headers
	Bej3App.h
	SexyApp.h
	InternetManager.h
	AdInstance.h
	BetaSupport.h
	WinInetHTTPTransfer.h
	PopDRMComm.h
	GraphicsRecorder.h
	Resources.h
	MainMenu.h
	Bej3ButtonListener.h
	CurvedVal.h
	SexyCache.h
	CustomBassMusicInterface.h
	SexyMathHermite.h
)

add_executable(BejBlitz WIN32 ${SRC_MAIN})
add_dependencies(BejBlitz SexyAppFramework)
target_link_libraries(BejBlitz SexyAppFramework)

set_target_properties(BejBlitz
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/game"
    RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_SOURCE_DIR}/game"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_SOURCE_DIR}/game"
    RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL "${CMAKE_SOURCE_DIR}/game"
    RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO "${CMAKE_SOURCE_DIR}/game"
    RUNTIME_OUTPUT_NAME "BejBlitz"
    RUNTIME_OUTPUT_NAME_DEBUG "BejBlitz_Debug"
    RUNTIME_OUTPUT_NAME_RELEASE "BejBlitz"
    RUNTIME_OUTPUT_NAME_MINSIZEREL "BejBlitz_MinSizeRel"
    RUNTIME_OUTPUT_NAME_RELWITHDEBINFO "BejBlitz_RelWithDebugInfo"
)