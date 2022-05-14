#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"
#include<vector>
using namespace std;

class QuickSort : public Sort{
    public:
    vector<int> sort(vector<int> list);
};
 



#endif