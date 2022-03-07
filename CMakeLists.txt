#-------------------------------------------------------------------------------
# CMake Setups
#-------------------------------------------------------------------------------
CMAKE_MINIMUM_REQUIRED (VERSION 3.15)

#-------------------------------------------------------------------------------
# Project Setups
#-------------------------------------------------------------------------------
PROJECT (numberchain)
ENABLE_LANGUAGE(C CXX)

SET(CMAKE_VERBOSE_MAKEFILE ON)
SET(CMAKE_COLOR_MAKEFILE ON)
SET(CMAKE_ERROR_DEPRECATED ON)
SET(CMAKE_EXPORT_COMPILE_COMMANDS ON)
SET(CMAKE_CXX_FLAGS "-std=c++11 -O2")

# Set version
set(VERSION_MAJOR "0")
set(VERSION_MINOR "0")
set(VERSION_PATCH "1")
set(VERSION "${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}")

#-------------------------------------------------------------------------------
# CMake Modules
#-------------------------------------------------------------------------------
INCLUDE(GNUInstallDirs)
INCLUDE(FeatureSummary)
INCLUDE(FindPkgConfig)

#------------------
# Sub Projects
#-------------------------------------------------------------------------------
ADD_SUBDIRECTORY(src)

#-------------------------------------------------------------------------------
# Options
#-------------------------------------------------------------------------------
# Detect avaliable options directly
  INCLUDE(options.cmake)


#-------------------------------------------------------------------------------
# Sub Projects (unittest)
#-------------------------------------------------------------------------------
# Only perform following  when use as standalone project
# Enable testing default
ENABLE_TESTING()
ADD_SUBDIRECTORY(tests)


