#include <cstddef>
#include <iostream>
#include <utility>
#include <vector>

void printVector(const std::vector<int> &v) {
  for (int num : v)
    std::cout << num << " ";

  std::cout << std::endl;
}

void sortColors(std::vector<int> &v) {
  std::size_t l = 0;
  std::size_t m = 0;
  std::size_t h = v.size();

  while (m < h) {
    if (v[m] == 0) {
      std::swap(v[l++], v[m++]);
    } else if (v[m] == 1) {
      m++;
    } else {
      std::swap(v[m], v[--h]);
    }
  }
}

int main() {
  std::vector<int> v = {0, 1, 2, 1, 0, 1, 0, 2, 2, 1, 0};

  sortColors(v);
  printVector(v);
}
