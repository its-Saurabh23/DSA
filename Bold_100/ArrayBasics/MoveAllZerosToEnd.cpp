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


#include <bits/stdc++.h>
using namespace std;

void MoveAllZeros(vector<int>arr,int n){
  
  vector<int>temp(n);
  
  int j = 0;
  for(int i= 0; i<n; i++){
      
      if(arr[i] != 0){
        temp[j++] = arr[i];
      }
  }
   
   while(j<n){
       temp[j++] = 0;
   }
   
   
   for( auto &x : temp){
       cout<<x<<" ";
   }
    
}


void MoveAllZerosInplace(vector<int>&arr){
    
    int j = 0;
    for(int i = 0; i<arr.size(); i++){
        
        if(arr[i]!= 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    
}

int main()
{
    vector<int>arr={1, 2, 0, 4, 3, 0, 5, 0};
    int n = arr.size();
    // MoveAllZeros(arr,n);
    MoveAllZerosInplace(arr);
    for(auto &x:arr){
        cout<<x<<" ";
    }
    return 0;
}