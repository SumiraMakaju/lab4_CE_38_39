#include <iostream>
#include <vector>
#include <chrono>   // Include chrono for timing
#include <iomanip>  // Include iomanip for output formatting
#include "insertion_sort.h"  // Include insertion sort header

int main() {
    const int size = 2000; // Example: Increase the size of the array

    std::vector<int> arr;
    arr.reserve(size);

    // Generate random data (or any other method to create a larger dataset)
    for (int i = 0; i < size; ++i) {
        arr.push_back(rand() % 1000); // Random numbers between 0 and 999
    }

    // Print part of unsorted array (to avoid large console output)
    std::cout << "Unsorted array (first 10 elements): ";
    for (int i = 0; i < 10; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "..." << std::endl;

    // Perform insertion sort and measure time
    auto start = std::chrono::high_resolution_clock::now();

    insertionSort(arr);

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start;

    // Print insertion sort time and sorted array
    std::cout << "\nTime taken for Insertion Sort: " << std::fixed << std::setprecision(2) << elapsed.count() << " ms\n";
    
    // Print part of sorted array (to avoid large console output)
    std::cout << "Sorted array (first 10 elements): ";
    for (int i = 0; i < 10; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "..." << std::endl;

    return 0;
}
