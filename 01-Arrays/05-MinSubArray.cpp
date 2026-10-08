#include <iostream>
#include <vector>
#include <algorithm>

int minSubArray(const std::vector<int> &v, int target) {
  int minLen = v.size() + 1;
  int l = 0;
  int curSum = 0;

  for (int r = 0, v_size = v.size(); r < v_size; ++r) {
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
