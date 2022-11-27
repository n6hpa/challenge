#include "challenge_math.h"

#include <gtest/gtest.h>

#include <iostream>

TEST(MathTest, challenge1) {
  // Sum of naturals divisible by 3 and 5
  constexpr uint64_t kUpperLimit = 15;
  constexpr uint64_t kResult = 3 + 5 + 6 + 9 + 10 + 12 + 15;
  EXPECT_EQ(jp::challenge1(kUpperLimit), kResult);
}

TEST(MathTest, largestPrime) {
  EXPECT_EQ(jp::largestPrime(0), 0);
  EXPECT_EQ(jp::largestPrime(1), 0);
  EXPECT_EQ(jp::largestPrime(2), 1);
  EXPECT_EQ(jp::largestPrime(3), 2);
  EXPECT_EQ(jp::largestPrime(4), 3);
  EXPECT_EQ(jp::largestPrime(5), 3);
  EXPECT_EQ(jp::largestPrime(6), 5);
  EXPECT_EQ(jp::largestPrime(7), 5);
}