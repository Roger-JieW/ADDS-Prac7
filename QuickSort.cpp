#include <iostream>
#include <vector>
#include "QuickSort.h"

using namespace std;

int findPivot(vector<int>&arr, int begin, int end )
{
    
    // int pivot;
    // if(arr.size()>=3)
    // {
    //     pivot = arr[2];
    //     arr[2] = arr[arr.size() - 1];
    //     arr[arr.size() - 1] = pivot;
    // }
    // else{
    //     pivot = arr[end];
    // }
    int pivot = arr[end];

    
    int i = begin - 1;

    for(int j = begin; j<= end - 1; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            int temporary = arr[i];
            arr[i] = arr[j];
            arr[j] = temporary;
        }
    }

    int temporary2 = arr[i+1];
    arr[i+1] = arr[end];
    arr[end] = temporary2;
    return (i+1);
}

vector<int> quick_sort(vector<int>&arr, int begin, int end ){
    if(begin < end)
    {
        int pivot = findPivot(arr, begin, end);
        quick_sort(arr, begin, pivot - 1);
        quick_sort(arr, pivot + 1, end);
    }
    return arr;
}




vector<int> QuickSort :: sort(vector<int> list){
    vector<int>result;
    result = quick_sort(list, 0, list.size()-1);
    
    return result;
}