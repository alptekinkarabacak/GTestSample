#include <iostream>
#include "gtest/gtest.h"
int main(int, char**) {
    ::testing::GTEST_FLAG(output) = "xml:test_results.xml";
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
