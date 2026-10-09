#include <cstddef>
#include <iostream>
#include <algorithm>
#include <vector>

std::size_t minSubArray(const std::vector<int> &v, int target) {
  if (v.empty())
    return 0;

  if (target <= 0)
    return 1;

  std::size_t minLen = v.size() + 1;
  std::size_t l = 0;
  long long curSum = 0;

  for (std::size_t r = 0; r < v.size(); ++r) {
    curSum += v[r];

    while (curSum >= target) {
      minLen = std::min(minLen, r - l + 1);
      curSum -= v[l++];
    }
  }

  return minLen == v.size() + 1 ? 0 : minLen;
}

int main() {
  std::vector<int> v = {1, 2, 3, 4, 5, 7, 8};

  std::cout << minSubArray(v, 6) << std::endl;
}
