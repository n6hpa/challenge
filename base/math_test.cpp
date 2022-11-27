#include "math.h"

#include <gtest/gtest.h>

#include <iostream>
// Demonstrate some basic assertions.
TEST(MathTest, factorial) {
  EXPECT_EQ(jp::base::factorial(0), 0);
  EXPECT_EQ(jp::base::factorial(1), 1);
  EXPECT_EQ(jp::base::factorial(2), 2);
  EXPECT_EQ(jp::base::factorial(3), 6);
  EXPECT_EQ(jp::base::factorial(4), 24);
}

TEST(MathTest, gcd) {
  EXPECT_EQ(jp::base::gcd(270, 192), 6);
  EXPECT_EQ(jp::base::gcd(192, 270), 6);
  EXPECT_EQ(jp::base::gcd(192, 78), 6);
  EXPECT_EQ(jp::base::gcd(78, 36), 6);
  EXPECT_EQ(jp::base::gcd(36, 6), 6);
  EXPECT_EQ(jp::base::gcd(6, 0), 6);

}

TEST(MathTest, lcm) {
  EXPECT_EQ(jp::base::lcm<int64_t>(14, 38), 266);
  EXPECT_EQ(jp::base::lcm(266, 21), 798);
  std::vector<int64_t> input = {21, 14, 38};
  EXPECT_EQ(jp::base::lcm(input), 798);
}
TEST(MathTest, getFactors) {
  std::vector<uint64_t> factors = {};
  std::vector<uint64_t> result = {};

  jp::base::getFactors(1, factors);
  result = {1};
  EXPECT_EQ(factors, result);

  jp::base::getFactors(10, factors);
  result = {1, 2, 5, 10};
  EXPECT_EQ(factors, result);
}

TEST(MathTest, isPrime) {
  EXPECT_TRUE(jp::base::isPrime(1));
  EXPECT_TRUE(jp::base::isPrime(2));
  EXPECT_TRUE(jp::base::isPrime(3));
  EXPECT_FALSE(jp::base::isPrime(4));
  EXPECT_TRUE(jp::base::isPrime(5));
  EXPECT_FALSE(jp::base::isPrime(6));
  EXPECT_TRUE(jp::base::isPrime(7));
  EXPECT_FALSE(jp::base::isPrime(8));
  EXPECT_FALSE(jp::base::isPrime(9));
  EXPECT_FALSE(jp::base::isPrime(10));
  EXPECT_TRUE(jp::base::isPrime(11));
}
