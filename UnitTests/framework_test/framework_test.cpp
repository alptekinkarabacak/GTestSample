#include "gtest/gtest.h"


class FrameworkTest : public testing::Test {
    public:

};


TEST_F(FrameworkTest, Test1)
{
    ASSERT_EQ(1, 1);
}