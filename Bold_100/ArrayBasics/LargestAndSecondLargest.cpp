/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

void largestSecondLargest(vector<int>&arr){
    
    int largest = INT_MIN;
    int secodLargest = INT_MIN;
    
    for(int i =0; i<arr.size(); i++){
        if(i>largest){
            secodLargest = largest;
            largest = arr[i];
        }else if(i>secodLargest && secodLargest  != largest){
            secodLargest = arr[i];
        }
    }
    std::cout << "Largest " <<largest<< std::endl;
    std::cout << "Second Larget " <<secodLargest<< std::endl;
}


int main()
{
    vector<int>arr={1,2,3,4,5,67,8,9,10};
    largestSecondLargest(arr);

    return 0;
}