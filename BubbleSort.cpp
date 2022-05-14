#include <iostream>
#include <vector>
#include "BubbleSort.h"

using namespace std;

vector<int> BubbleSort :: sort(vector<int> list){
    vector<int>result;
   int n = list.size();

   for(int i = 0; i<n-1; i++)
   {
       for(int j = 0; j<n-i-1; j++)
       {
           if(list.at(j) > list.at(j+1))   // list.at(j) = 20    list.at(j+1) = 7
           {
               int temporary = list.at(j);// temporary = 20
               list[j] = list.at(j+1); // list.at(j) = 7
               list[j+1] = temporary; // list.at(j+1) = 20

           }
       }
   }

    result = list;
    
    return result;
}