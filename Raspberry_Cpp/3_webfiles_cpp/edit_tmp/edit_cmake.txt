cmake_minimum_required(VERSION 3.13)
project(test_WebPoco)

set(CMAKE_CXX_STANDARD 11)

add_executable(test_WebPoco main.cpp)

# ===================== PocoWebSerwer  =====================

#Ref http://stackoverflow.com/questions/30114662/clion-cmake-and-poco
            #cmake_minimum_required(VERSION 3.3)
            #project(Poco_test)

# define the project
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
#add_executable(Poco_test ${SOURCE_FILES})

set(ENV{LD_LIBRARY_PATH} "/usr/local/lib")

#Debug
SET(CMAKE_BUILD_TYPE Debug)

# set the POCO paths and libs
set(POCO_PREFIX "/usr/local")
# the directory containing "include" and "lib"
set(POCO_INCLUDE_DIR "${POCO_PREFIX}/include")
set(POCO_LIB_DIR "${POCO_PREFIX}/lib")
set(POCO_LIBS        "${POCO_LIB_DIR}/libPocoNet.so"
        "${POCO_LIB_DIR}/libPocoUtil.so"
        "${POCO_LIB_DIR}/libPocoJSON.so"
        "${POCO_LIB_DIR}/libPocoXML.so"
        "${POCO_LIB_DIR}/libPocoFoundation.so"
        "pthread")


# set the include path for the app
target_include_directories(test_WebPoco PRIVATE
        $(POCO_INCLUDE_DIR))

# link the app against POCO
target_link_libraries(test_WebPoco "${POCO_LIBS}")


# ===================== WiringPi =====================
set(CMAKE_VERBOSE_MAKEFILE ON)

# Include headers
include_directories(.)

# Link against wiringPi
find_library(WIRINGPI_LIBRARIES NAMES wiringPi)
target_link_libraries(test_WebPoco ${WIRINGPI_LIBRARIES})               # WiringPi - name project