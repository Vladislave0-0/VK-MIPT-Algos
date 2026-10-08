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

int main() {
  std::vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::vector<int> v2 = {1, 2, 3, 4};

  rotateArray(v1, 0, v1.size() - 1);
  rotateArray(v2, 0, v2.size() - 1);

  printVector(v1);
  printVector(v2);
}
