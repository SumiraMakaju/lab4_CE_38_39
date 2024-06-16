#include <iostream>
#include <vector>
#include <random>

class Insertion {
public:
    Insertion() {}  // Default constructor
    ~Insertion() {} // Destructor (usually not needed in simple cases)

    // Function to sort an array of integers using insertion sort
    void sort(int arr[], int n) {
        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;

            // Move elements of arr[0..i-1], that are greater than key, to one position ahead
            // of their current position
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }
};

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);

    std::cout << "Using std::mt19937:\n";
    std::vector<int> arr1(10);  // Use a vector for dynamic memory allocation
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

    Insertion ins;

    // Sort the vectors using the insertion_sort method
    ins.sort(arr1.data(), arr1.size());
    ins.sort(arr2.data(), arr2.size());

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
