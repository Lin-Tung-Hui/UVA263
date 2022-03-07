#-------------------------------------------------------------------------------
# Generate configs
#-------------------------------------------------------------------------------
INCLUDE_DIRECTORIES (${CMAKE_CURRENT_BINARY_DIR})

#-------------------------------------------------------------------------------
# Generate tests
#-------------------------------------------------------------------------------

ADD_EXECUTABLE(test_runner 
  unittest_main.cpp
  numberchain_unittest.cpp
)

TARGET_LINK_LIBRARIES(test_runner
  numberchain
  ${GTEST_LIBRARIES}
  ${GMOCK_LIBRARIES})

ADD_TEST(NAME test_runner
  COMMAND test_runner)
