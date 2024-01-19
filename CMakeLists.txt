cmake_minimum_required(VERSION 3.15)

project(rndgen VERSION 1.0)

add_library(compiler_flags INTERFACE)
target_compile_features(compiler_flags INTERFACE cxx_std_20)

set(gcc_like_cxx "$<COMPILE_LANG_AND_ID:CXX,ARMClang,AppleClang,Clang,GNU,LCC>")
set(msvc_cxx "$<COMPILE_LANG_AND_ID:CXX,MSVC>")
target_compile_options(compiler_flags INTERFACE  "$<${gcc_like_cxx}:$<BUILD_INTERFACE:-Wall;-Wextra;-Wshadow;-Wformat=2;-Wunused>>" "$<${msvc_cxx}:$<BUILD_INTERFACE:-W3>>")

configure_file(project_config.h.in project_config.h)

add_executable(rnd main.cpp)

target_include_directories(rnd PUBLIC "${PROJECT_BINARY_DIR}")
