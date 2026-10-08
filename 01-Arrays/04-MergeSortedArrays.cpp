#include <iostream>
#include <vector>

void printVector(const std::vector<int> &v) {
  for (int num : v) {
    std::cout << num << " ";
  }
  std::cout << '\n';
}

std::vector<int> mergeSortedArrays(const std::vector<int> &v1,
                                   const std::vector<int> &v2) {
  int i = 0;
  int j = 0;

  int v1_size = v1.size();
  int v2_size = v2.size();

  std::vector<int> v;
  v.reserve(v1.size() + v2.size());

  while (i < v1_size && j < v2_size) {
    if (v1[i] < v2[j]) {
      v.push_back(v1[i++]);
    } else {
      v.push_back(v2[j++]);
    }
  }

  while (i < v1_size)
    v.push_back(v1[i++]);

  while (j < v2_size)
    v.push_back(v2[j++]);

  return v;
}

int main() {
  std::vector<int> v1 = {1, 4, 5, 7};
  std::vector<int> v2 = {1, 2, 3, 6, 9};

  std::vector<int> v = mergeSortedArrays(v1, v2);
  printVector(v);
}
