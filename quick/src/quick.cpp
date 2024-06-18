#include<iostream>
#include "quicksort.h"
#include<vector>

void QuickSort::Sort(std::vector<int>&arr, int low, int high){
    if(low<high){
        int pi = partition(arr, low, high);
        Sort(arr, low, pi-1);
        Sort(arr, pi+1, high);
    }
    
}

int QuickSort::partition(std::vector<int>&arr, int low, int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j=low; j<high; j++){
        if(arr[j]<pivot){
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i+1], arr[high]);
    return i+1;
}

