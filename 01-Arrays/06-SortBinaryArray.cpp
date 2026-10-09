#include <cstddef>
#include <iostream>
#include <utility>
#include <vector>

void printVector(const std::vector<int> &v) {
  for (int num : v)
    std::cout << num << " ";

  std::cout << std::endl;
}

void sortBinaryArray(std::vector<int> &v) {
  std::size_t l = 0;
  std::size_t r = v.size();

  while (l < r) {
    while (l < r && v[l] == 0)
      l++;

    while (l < r && v[r - 1] == 1)
      r--;

    if (l < r)
      std::swap(v[l++], v[--r]);
  }
}

int main() {
  std::vector<int> v = {0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0};

  sortBinaryArray(v);
  printVector(v);
}
