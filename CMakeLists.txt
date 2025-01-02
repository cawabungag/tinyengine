cmake_minimum_required(VERSION 3.27)
project(tinyengine)

set(CMAKE_CXX_STANDARD 17)

# Add library paths
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

# Find necessary packages
find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(Lua REQUIRED)

# Include directories
include_directories(libs)
include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIRS} ${LUA_INCLUDE_DIR})


# Collect source files
file(GLOB_RECURSE SOURCES 
    "src/*.cpp"
    "src/Game/*.cpp"
    "src/Logger/*.cpp"
)

# Add executable target
add_executable(tinyengine ${SOURCES})

# Link libraries
# target_link_libraries(tinyengine PRIVATE SDL2_image::SDL2_image)
target_link_libraries(tinyengine SDL2_image::SDL2_image ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES} ${LUA_LIBRARIES})