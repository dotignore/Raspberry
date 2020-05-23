cmake_minimum_required(VERSION 3.13)

set(Patch_Project "test_PocoWebServer")                         # Patch Way Project - "${Patch_Project}"
project("${Patch_Project}")                                     # Patch Way Project - "${Patch_Project}"

set(CMAKE_CXX_STANDARD 11)

add_executable("${Patch_Project}" main.cpp)                     # Patch Way Project - "${Patch_Project}"

# ===================== PocoWebSerwer  =====================
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
set(POCO_LIB_DIR     "${POCO_PREFIX}/lib")
set(POCO_LIBS        "${POCO_LIB_DIR}/libPocoNet.so"
                     "${POCO_LIB_DIR}/libPocoUtil.so"
                     "${POCO_LIB_DIR}/libPocoJSON.so"
                     "${POCO_LIB_DIR}/libPocoXML.so"
                     "${POCO_LIB_DIR}/libPocoFoundation.so"
                     "pthread")


# set the include path for the app
target_include_directories("${Patch_Project}" PRIVATE            # Patch Way Project - "${Patch_Project}"
        $(POCO_INCLUDE_DIR))

# link the app against POCO
target_link_libraries("${Patch_Project}" "${POCO_LIBS}")          # Patch Way Project - "${Patch_Project}"


# ===================== WiringPi =====================
set(CMAKE_VERBOSE_MAKEFILE ON)

# Include headers
include_directories(.)

# Link against wiringPi
find_library(WIRINGPI_LIBRARIES NAMES wiringPi)
target_link_libraries("${Patch_Project}" ${WIRINGPI_LIBRARIES})   # Patch Way Project - "${Patch_Project}"