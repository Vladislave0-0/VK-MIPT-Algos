#include <cstddef>
#include <iostream>
#include <utility>
#include <vector>

void printVector(const std::vector<int> &v) {
  for (int num : v)
    std::cout << num << " ";

  std::cout << std::endl;
}

void zeroesToEnd(std::vector<int> &v) {
  std::size_t idx = 0;

  for (std::size_t i = 0; i < v.size(); ++i) {
    if (v[i] != 0)
      std::swap(v[i], v[idx++]);
  }
}

int main() {
  std::vector<int> v1 = {0, 1, 0, 3, 12};

  zeroesToEnd(v1);
  printVector(v1);
}
