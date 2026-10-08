#include <iostream>
#include <vector>

void printVector(const std::vector<int> &v) {
  for (int num : v) {
    std::cout << num << " ";
  }
  std::cout << '\n';
}

void ZeroesToEnd(std::vector<int> &v) {
  int idx = 0;

  for (int i = 0, v_size = v.size(); i < v_size; ++i) {
    if (v[i] != 0)
      std::swap(v[i], v[idx++]);
  }
}

int main() {
  std::vector<int> v1 = {0, 1, 0, 3, 12};

  ZeroesToEnd(v1);
  printVector(v1);
}