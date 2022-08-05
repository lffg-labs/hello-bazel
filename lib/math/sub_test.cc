#include <gtest/gtest.h>

extern "C" {
    #include "sub.h"
}

TEST(Sub, Sub) {
  EXPECT_EQ(sub(1, 2), -1);
}
