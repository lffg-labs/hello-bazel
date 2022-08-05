#include <gtest/gtest.h>

extern "C" {
  #include "add.h"
}

TEST(Add, Add) {
  EXPECT_EQ(add(1, 2), 3);
}
