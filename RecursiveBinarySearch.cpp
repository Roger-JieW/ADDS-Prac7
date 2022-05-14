#include <iostream>
#include <vector>
#include "RecursiveBinarySearch.h"

using namespace std;


int binarySearch(vector<int> arr, int begin, int end, int x)
{
    if(begin >end)
    {
        return -9;
    }

    int middle = (begin + end)/2; // 4,3,6,2,1,9
    if(arr[middle] == x)
    {
        return middle;
    }
    else if( x < arr[middle])
    {
        return binarySearch(arr, begin, middle - 1, x);
    }else{
        return binarySearch(arr, middle + 1, end, x);
    }
}






bool RecursiveBinarySearch :: search(vector<int> list, int x){
    int result = binarySearch(list, 0, list.size() - 1, x);
    if( result < 0 )
    {
        return false;

    }else return true;

}