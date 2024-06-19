#include <iostream>
#include "insertion_sort.h"

int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6};

    std::cout << "Unsorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    insertionSort(arr);

    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
