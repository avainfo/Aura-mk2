cmake_minimum_required(VERSION 3.20)

project(AuraMk2
	VERSION 0.1.0
	DESCRIPTION "System core of the Aura MK II project"
	LANGUAGES CXX
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(aura_core
	src/main.cpp
	src/logical_canvas.cpp
	src/helpers/diagnostics.cpp
)

target_include_directories(aura_core
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(aura_core
	PRIVATE
		cxx_std_23
)

target_compile_options(aura_core
	PRIVATE
		-Wall
		-Wextra
		-Wpedantic
)

include(FetchContent)

FetchContent_Declare(
	yaml-cpp
	GIT_REPOSITORY https://github.com/jbeder/yaml-cpp.git
	GIT_TAG yaml-cpp-0.9.0
)

FetchContent_MakeAvailable(yaml-cpp)

target_link_libraries(aura_core
	PRIVATE
	yaml-cpp::yaml-cpp
)
