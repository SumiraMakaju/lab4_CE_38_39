#include "quicksort.h"
#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <iomanip>
int main(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(1, 100);

    const int size = 80000;
    std::vector<int> arr;

    for(int i=0; i<size; i++){
        arr.push_back(dis(gen));
    }
    std::cout<<"\ndata size: "<<size<<"\n";
    std::cout<<"Before sorting: ";
    for(int i=0; i<arr.size(); i++){
        std::cout<<arr[i]<<" ";
    }

    auto start = std::chrono::high_resolution_clock::now();

    QuickSort qs;
    qs.Sort(arr, 0, arr.size()-1);

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end-start;
    std::cout<<"\nTime taken: "<<std::fixed<<std::setprecision(2)<<elapsed.count()<<" ms";


    std::cout<<"\nAfter sorting: ";
    for(int i=0; i<arr.size(); i++){
        std::cout<<arr[i]<<" ";
    }
}