#include<iostream>
#include<vector>
#include<random>

void QuickSort(std::vector<int>&arr, int low, int high){
    if(low<high){
        int pivot = arr[high];
        int i = low-1;
        for(int j=low; j<high; j++){
            if(arr[j]<pivot){
                i++;
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[i+1], arr[high]);
        int pi = i+1;
        QuickSort(arr, low, pi-1);
        QuickSort(arr, pi+1, high);
    }
    
}

int partition(std::vector<int>&arr, int low, int high){
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

int main(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(1, 100);
    std::vector<int> arr;
    for(int i=0; i<10; i++){
        arr.push_back(dis(gen));
    }
    for(int i=0; i<arr.size(); i++){
        std::cout<<arr[i]<<" ";
    }
}