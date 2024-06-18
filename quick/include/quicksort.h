#pragma once
#include <vector>
class QuickSort{
    public:
        QuickSort(){}
        ~QuickSort(){}

        int partition(std::vector<int>&arr, int low, int high);
        void Sort(std::vector<int>&arr, int low, int high);

};