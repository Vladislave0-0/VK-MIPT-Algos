#include <iostream>
#include <vector>

void printVector(const std::vector<int> &v) {
  for (int num : v) {
    std::cout << num << " ";
  }
  std::cout << '\n';
}

void swap(int &x, int &y) {
  int tmp = std::move(x);
  x = std::move(y);
  y = std::move(tmp);
}

void sortBinaryArray(std::vector<int> &v) {
  int l = 0;
  int r = v.size() - 1;

  while (l < r) {
    while (l < r && v[l] == 0)
      l++;

    while (l < r && v[r] == 1)
      r--;

    if (l < r)
      swap(v[l++], v[r--]);
  }
}

int main() {
  std::vector<int> v = {0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0};

  sortBinaryArray(v);
  printVector(v);
}
