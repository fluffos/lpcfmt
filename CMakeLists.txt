cmake_minimum_required(VERSION 3.10)
project(lpcfmt)

set(CMAKE_CXX_STANDARD 17)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
# required if linking to static library
add_definitions(-DANTLR4CPP_STATIC)

set(ANTLR4_TAG 5e5b6d35b4183fd330102c40947b95c4b5c6abb5)

# add external build for antlrcpp
include(ExternalAntlr4Cpp)

# add antrl4cpp artifacts to project environment
include_directories(${ANTLR4_INCLUDE_DIRS})

file(GLOB gen_SRC gen/*.cpp)

include_directories(thirdparty/runtime/runtime/src)

add_executable(lpcfmt
        main.cpp
        ${gen_SRC}
)

target_link_libraries(lpcfmt antlr4_static)
