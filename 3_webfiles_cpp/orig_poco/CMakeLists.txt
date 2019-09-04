#Ref http://stackoverflow.com/questions/30114662/clion-cmake-and-poco
cmake_minimum_required(VERSION 3.3)

project(PoCoWebSocketTest)

# define the project
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(PoCoWebSocketTest ${SOURCE_FILES})

# set the POCO paths and libs
set(POCO_PREFIX "/usr/local") # the directory containing "include" and "lib"
set(POCO_INCLUDE_DIR "${POCO_PREFIX}/include")
set(POCO_LIB_DIR "${POCO_PREFIX}/lib")

set(POCO_LIBS
        "${POCO_LIB_DIR}/libPocoNet.so"
        "${POCO_LIB_DIR}/libPocoUtil.so"
        "${POCO_LIB_DIR}/libPocoFoundation.so")


# set the include path for the app
target_include_directories(PoCoWebSocketTest PRIVATE $(POCO_INCLUDE_DIR))
# link the app against POCO
target_link_libraries(PoCoWebSocketTest "${POCO_LIBS}")