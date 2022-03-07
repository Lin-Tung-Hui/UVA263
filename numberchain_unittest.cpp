#include <gtest/gtest.h>
#include <iostream>
#include "main.h"

class NumberchainTest : public testing::Test
{
};

TEST_F(NumberchainTest, number_chain_test_1234)
{
    std::string tmp = "1234";
    EXPECT_EQ(compute_chain_length(tmp), 4);
}

TEST_F(NumberchainTest, number_chain_test_444)
{
    std::string tmp = "444";
    EXPECT_EQ(compute_chain_length(tmp), 2);
}

TEST_F(NumberchainTest, number_chain_test_123456789)
{
    std::string tmp = "123456789";
    EXPECT_EQ(compute_chain_length(tmp), 2);
}

