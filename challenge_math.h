//
// Math Challenge Problems
//
// Author: Jacob Portukalian
//
#pragma once

#include <cstdint>
#include <vector>

namespace jp {
// Computes the sum of natural numbers divisible by 3 and 5 up to given limit
//
uint64_t challenge1(uint64_t limit);

// Largest prime smaller than given number
uint64_t largestPrime(uint64_t max);
}  // namespace jp