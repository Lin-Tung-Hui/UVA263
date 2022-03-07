PROJECT(main_config)

#-------------------------------------------------------------------------------
# Export Interface
#-------------------------------------------------------------------------------
ADD_LIBRARY (numberchain STATIC
  numberchain.cpp
  )

TARGET_INCLUDE_DIRECTORIES(numberchain
  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)

TARGET_LINK_LIBRARIES(
  numberchain
  )

#-------------------------------------------------------------------------------
# Generate Binary
#-------------------------------------------------------------------------------

ADD_EXECUTABLE(main
  main.cpp
  )

TARGET_LINK_LIBRARIES(main
  numberchain
  )

