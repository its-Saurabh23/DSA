#include <bits/stdc++.h>
using namespace std;

//In place Two pointer Apporach
void moveAllZerosToEnd(vector<int>&arr){
    
    int j = 0;
    for(int i = 0; i<arr.size(); i++){
        
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main()
{
    std::vector<int>arr ={1,2,0,1,0,4};
    
    moveAllZerosToEnd(arr);
    
    for(auto x:arr){
        cout<<x<<"\n";
    }

    return 0;
}