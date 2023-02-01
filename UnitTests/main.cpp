#include <iostream>
#include "gtest/gtest.h"
int main(int, char**) {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}