cmake_minimum_required(VERSION 3.20)

project(AuraMk2
	VERSION 0.1.0
	DESCRIPTION "System core of the Aura MK II project"
	LANGUAGES CXX
)

add_executable(aura_core
	src/main.cpp
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
