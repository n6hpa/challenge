//
// Math Challenge Problems
//
// Author: Jacob Portukalian
//
#pragma once

#include <cstdint>
#include <numeric>
#include <vector>

namespace jp {
namespace base {
// Return n!
uint64_t factorial(uint64_t n);

// Greatest Common Divisor
//
// T should be an integer type
template<typename T>
T gcd(T a, T b) {
  //
  // This funcction uses the Euclidean algorithm based on the fact that
  //
  // GCD(A, B) = GCD(B, R)
  //
  // where R = B % A
  if (a == 0) return b;
  if (b == 0) return a;

  while (b != 0) {
    auto rem = a % b;
    a = b;
    b = rem;
  }
  return a;
}

// Least Common Multiple
//
// Computes the LCM of a pair of integeers
//
// Uses the GCD method, that is the LCM = A * B / GCD(A, B)
//
template <typename T>
T lcm(T a, T b) {
  auto temp = gcd(a, b);
  if (temp == 0) return 0;
  return a * (b / temp);
}
// Use std::accumulate to compute the LCM for a container of numbers
template<typename C, typename T = typename C::value_type>
T lcm(const C& input) {
  return std::accumulate(input.begin(), input.end(), 1, lcm<T>);
}

void getFactors(uint64_t num, std::vector<uint64_t>& factors);
bool isPrime(uint64_t num);
// Largest prime smaller than given number
uint64_t largestPrime(uint64_t max);
} // namespcae base
} // namespace jp