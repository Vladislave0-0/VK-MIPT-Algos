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

void rotateArray(std::vector<int> &v, int l, int r) {
  while (l < r)
    swap(v[l++], v[r--]);
}

void shiftArray(std::vector<int> &v, size_t k) {
  int len = v.size();
  k %= len;

  rotateArray(v, 0, len - 1);
  rotateArray(v, 0, k - 1);
  rotateArray(v, k, len - 1);
}

int main() {
  std::vector<int> v1 = {1, 2, 3, 4, 5, 6, 7};
  std::vector<int> v2 = {1, 2, 3, 4};

  shiftArray(v1, 3);
  printVector(v1);
}
