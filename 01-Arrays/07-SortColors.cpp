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

void sortColors(std::vector<int> &v) {
  int l = 0;
  int m = 0;
  int h = v.size() - 1;

  while (m <= h) {
    if (v[m] == 0) {
      swap(v[l++], v[m++]);
    } else if (v[m] == 1) {
      m++;
    } else {
      swap(v[m], v[h--]);
    }
  }
}

int main() {
  std::vector<int> v = {0, 1, 2, 1, 0, 1, 0, 2, 2, 1, 0};

  sortColors(v);
  printVector(v);
}
