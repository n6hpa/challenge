#include <gtest/gtest.h>
#include <iostream>

#include "math.h"
// Demonstrate some basic assertions.
TEST(MathTest, factorial) {
  // Expect two strings not to be equal.
  std::cout << "Hello from test" << std::endl;
  EXPECT_EQ(jp::factorial(1), 1);
  EXPECT_EQ(jp::factorial(2), 2);
  //EXPECT_EQ(jp::factorial(3), 6);
}
