#include<iostream>
#include "quicksort.h"

void QuickSort::Sort(int a[], int low, int high){
    int pivot;
    if(low < high){
       pivot = partition(a, low, high);
       Sort(a, low, pivot-1);
       Sort(a, pivot+1, high);
    }
}

int QuickSort::partition(int a[], int low, int high){
    int pi,temp;
    pi = a[high];
    int i = low - 1, j = high+1;

for (j = low; j<high; j++){
    if(a[j]<= pi){
        i++;
        std::swap(a[i], a[j]);
    }
}
 std::swap(a[i+1], a[high]);

    return i+1;

}