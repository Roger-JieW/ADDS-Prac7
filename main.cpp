#include <iostream>
#include <vector>
#include <sstream>
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

using namespace std;

int main()
{
    vector<int>result; string s;

    getline(cin, s);

    vector<string>output;
    istringstream iss(s);
    for (string s; iss >> s;)
    {
        output.push_back(s);
    }

    for(int i = 0; i<output.size(); i++)
    {
        result.push_back(stoi(output.at(i)));
    }

    QuickSort *b = new QuickSort();
    vector<int>sorted_result;
    sorted_result = b->sort(result);


    RecursiveBinarySearch *r = new RecursiveBinarySearch();
    int tureOrFalse = r->search(sorted_result, 1);
    if(tureOrFalse == 1)
    {
        cout<<"true ";
    }else{
        cout<<"false ";
    }


    for(int i = 0; i<sorted_result.size(); i++)
    {
        cout<< sorted_result.at(i)<<" ";
    }

    cout<<endl;
    return 0;
}