#include<bits/stdc++.h>
using namespace std;

// When solving partition problems ask:

// How many regions?
// Is order important?
// One pass or multiple pass?
// In-place required?


void sortZeroAndOne(vector<int>&arr){
    int n = arr.size();
    if(n<0){
        std::cout <<"Arry is empty"<< std::endl;
        return;
    }
    int low = 0;
    int high = n;
    int mid = 0;
    
    while(mid<=high){
        if(arr[mid] == 0){                   // first resign 
            swap(arr[mid],arr[high]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){             // second resign
            mid++;
        }else{
            swap(arr[mid],arr[high]);     // third resign
            high--;
        }
    }
}

void SortZerosOnces(vector<int>&arr){
    int low = 0;
    int end = arr.size()-1;
    int mid = 0;
    
    while(mid<=end){
        
        if(arr[mid] == 0){ 
        swap(arr[low++],arr[mid++]);
            
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[mid],arr[end--]);
        }
    }
}

int main()
{
   vector<int>arr={0, 1, 2, 0, 1, 2};
   sortZeroAndOne(arr);
   for(auto &x:arr){
       cout<<x<<"\n";
   }
    return 0;
}
