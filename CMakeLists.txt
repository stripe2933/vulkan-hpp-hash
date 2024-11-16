cmake_minimum_required(VERSION 3.30)
project(vulkan-hpp-hash LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_MODULE_STD 1)

# ----------------
# External dependencies.
# ----------------

find_package(Vulkan REQUIRED)

# ----------------
# Project targets.
# ----------------

add_executable(vulkan-hpp-hash main.cpp)
target_sources(vulkan-hpp-hash PRIVATE
    FILE_SET CXX_MODULES
    FILES extlib/module-port/vulkan.cppm
)
target_link_libraries(vulkan-hpp-hash PRIVATE Vulkan::Vulkan)