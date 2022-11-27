#include "challenge_math.h"

#include "base/math.h"
#include "base/range.h"

#include <numeric>
#include <ranges>

namespace jp {

uint64_t challenge1(uint64_t limit) {
  // TODO: upgrade this to c++20 at some point
  uint64_t result = 0;

  // range of values to test
  for (auto ii : base::range<uint64_t>(3, limit + 1)) {
    if (ii % 3 == 0 or ii % 5 == 0) {
      result += ii;
    } 
  }

  return result;
}

uint64_t largestPrime(uint64_t max) {
  if (max == 0 || max == 1) return 0;
  uint64_t result = 1;

  for (uint64_t ii = 1; ii < max; ii++) {
    if (base::isPrime(ii)) {
      result = ii;
    }
  }
  return result;
}
}  // namespace jp