#include <iostream>
#include <vector>

void printVector(const std::vector<int> &v) {
  for (int num : v) {
    std::cout << num << " ";
  }
  std::cout << '\n';
}

void evenFirst(std::vector<int> &v) {
  std::vector<int> result;

  for (int num : v) {
    if (num % 2 == 0)
      result.push_back(num);
  }

  for (int num : v) {
    if (num % 2 != 0)
      result.push_back(num);
  }

  v = std::move(result);
}

int main() {
  std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  evenFirst(v);
  printVector(v);
}
