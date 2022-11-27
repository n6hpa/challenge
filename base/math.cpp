#include "base/math.h"
#include "base/range.h"

#include <algorithm>

namespace jp {
namespace base {
uint64_t factorial(uint64_t n) {
  // handle zero input
  if (n == 0) return 0;
  // range contains values from 1 to n-1
  auto idx = range<uint64_t>(1, n);
  // multiply n by all values in the range
  std::for_each(idx.begin(), idx.end(), [&n](uint64_t x) { n *= x;});
  // n is now n!
  return n;
}





void getFactors(uint64_t num, std::vector<uint64_t>& factors) {
  if (factors.size() > 0) {
    factors.clear();
  }
  // Does it make sense to return the vector here instead? Can I std::move it?
  if (num == 0) {
    factors.push_back(0);
    return;
  }

  factors.push_back(1);
  for (uint64_t ii = 2; ii <= num; ii++) {
    if (num % ii == 0) {
      factors.push_back(ii);
    }
  }
}

bool isPrime(uint64_t num) {
  std::vector<uint64_t> factors;
  getFactors(num, factors);
  return (factors.size() == 1 && factors.at(0) == 1) || factors.size() == 2;
}

uint64_t largestPrime(uint64_t max) {
  if (max == 0 || max == 1) return 0;
  uint64_t result = 1;

  for (uint64_t ii = 1; ii < max; ii++) {
    if (isPrime(ii)) {
      result = ii;
    }
  }
  return result;
}
}  // namespace base
}  // namespace jp