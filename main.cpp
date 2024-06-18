#include <iostream>
#include <vector>
#include <random>

#include "InsertionSort.h" 

int main() {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(1, 100);

  std::cout << "Using std::mt19937:\n";
  std::vector<int> arr1(10);
  for (int i = 0; i < 10; i++) {
    arr1[i] = dis(gen);
    std::cout << arr1[i] << " ";
  }
  std::cout << std::endl;

  std::cout << "Using rand():\n";
  std::vector<int> arr2(10);
  for (int i = 0; i < 10; i++) {
    arr2[i] = rand() % 100;
    std::cout << arr2[i] << " ";
  }
  std::cout << std::endl;

  InsertionSort ins;

  ins.Sort(arr1.data(), arr1.size());
  ins.Sort(arr2.data(), arr2.size());

  std::cout << "Sorted using std::mt19937:\n";
  for (int i = 0; i < 10; i++) {
    std::cout << arr1[i] << " ";
  }
  std::cout << std::endl;

  std::cout << "Sorted using rand():\n";
  for (int i = 0; i < 10; i++) {
    std::cout << arr2[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
