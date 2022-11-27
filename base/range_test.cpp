#include "range.h"

#include <gtest/gtest.h>

#include <iostream>

TEST(RangeTest, basicTest) {
  int counter = 0;
  int saved_iter_value = 0;
  for (auto xx : jp::base::range<int>(0, 10)) {
    ++counter;
    saved_iter_value = xx;
  }
  // The loop runs 10 times, which means ii is 10
  EXPECT_EQ(counter, 10);
  EXPECT_EQ(saved_iter_value, 9);

  counter = 0;
  for (auto xx : jp::base::range<int>(0, 0)) {
    ++counter;
    saved_iter_value = xx;
  }
  EXPECT_EQ(counter, 0);
}