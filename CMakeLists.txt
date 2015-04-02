#==============================================================================
# QGoogleAnalytics
#
# Description: QGoogleAnalytics
#
# Author: Daniel Agredano <agredain at gmail.com>, (C) 2015
#
# Copyright: See COPYING file that comes with this distribution
#==============================================================================

project (QGoogleAnalytics)
set(VERSION_MAJOR 0)
set(VERSION_MINOR 1)
set(VERSION_PATCH 0)
mark_as_advanced(VERSION_MAJOR VERSION_MINOR VERSION_PATCH)
cmake_minimum_required(VERSION 2.8.12 FATAL_ERROR)

include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
        message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

set (CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g -Wall -fprofile-arcs -ftest-coverage -O0")
set (CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -Wall -fprofile-arcs -ftest-coverage -O0")
set (CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -g -Wall -fprofile-arcs -ftest-coverage -O0")

set(QT5_INSTALL_PREFIX "" CACHE PATH "The install location of Qt5")
set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} ${QT5_INSTALL_PREFIX})

find_package(Qt5 COMPONENTS Network REQUIRED)

aux_source_directory( src/ SRC_LIST)

file( GLOB_RECURSE INCLUDE_LIST include/*.h )
include_directories( include )

option(BUILD_SHARED "Build libraries shared." ON)

if(BUILD_SHARED)
  set(LIBRARY_TYPE SHARED)
else(BUILD_SHARED)
  set(LIBRARY_TYPE STATIC)
endif(BUILD_SHARED)

add_library(${PROJECT_NAME} ${LIBRARY_TYPE} ${INCLUDE_LIST} ${SRC_LIST})
target_link_libraries(${PROJECT_NAME} )
qt5_use_modules(${PROJECT_NAME} Core Network)

#add_executable(example example/example.cpp ${INCLUDE_LIST})
#target_link_libraries(example ${PROJECT_NAME})

set_target_properties( ${PROJECT_NAME} #example
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

install(TARGETS ${PROJECT_NAME}
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

install(DIRECTORY include/ DESTINATION include/
        FILES_MATCHING PATTERN "*.h")
