# https://aijishu.com/a/1060000000070154
# https://kezunlin.me/post/281dd8cd/
#
#   /usr/local/include/Poco
#   /usr/local/lib
#   /usr/lib/cmake/Poco

#project(test_poco_web_server)

cmake_minimum_required (VERSION 2.6)

project (test_poco_web_server)
enable_language(C)
enable_language(CXX)

# Always include the source and build directories in the include path.
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# Find Poco package  1.8.1
find_package(Poco REQUIRED COMPONENTS Foundation Util Net XML JSON)

# no Poco_INCLUDE_DIRS, we have to set by hand
if(MSVC) # WIN32
    SET(Poco_INCLUDE_DIRS "C:/Program Files/Poco/include")
else()
    SET(Poco_INCLUDE_DIRS "/usr/local/include/Poco")
endif(MSVC)

MESSAGE( [Main] " Poco_INCLUDE_DIRS = ${Poco_INCLUDE_DIRS}")
MESSAGE( [Main] " Poco_LIBRARIES = ${Poco_LIBRARIES}")

# The following folder will be included
include_directories(
    ${MY_SRC_INCLUDE}
    ${Poco_INCLUDE_DIRS}
)

link_directories(${CMAKE_BINARY_DIR})

add_executable(test_poco_web_server main.cpp)
target_link_libraries(test_poco_web_server ${Poco_LIBRARIES})