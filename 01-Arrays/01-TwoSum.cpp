#include <iostream>
#include <utility>
#include <vector>

std::pair<int, int> twoSum(const std::vector<int> &nums, const int target) {
  if (nums.size() < 2)
    return {-1, -1};

  int l = 0;
  int r = static_cast<int>(nums.size()) - 1;

  while (l < r) {
    long long sum = static_cast<long long>(nums[l]) + nums[r];

    if (sum == target) {
      return {l, r};
    } else if (sum < target) {
      l++;
    } else {
      r--;
    }
  }

  return {-1, -1};
}

int main() {
  std::vector<int> nums = {2, 3, 4};
  int target = 6;

  std::pair<int, int> res = twoSum(nums, target);

  if (res.first != -1) {
    std::cout << res.first << " " << res.second << std::endl;
  }
}
