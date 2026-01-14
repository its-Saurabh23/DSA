#include<bits/stdc++.h>
using namespace std;

bool isSubsetSum(vector<int>&arr,int n,int sum){
      if(sum == 0){
         return true;
     }
     
     if(n == 0){
         return false;
     }

     if(sum<arr[n-1]){
        return isSubsetSum(arr,n-1,sum); 
     }
     return isSubsetSum(arr,n-1,sum -arr[n-1]) || isSubsetSum(arr,n-1,sum);
} 

void minimumDiff(vector<int>&arr){
    
    int range = 0;
    int n = arr.size();
    
    for(int i = 0; i<arr.size(); i++){
        range = range + arr[i];
    }
    
    int mini = INT_MAX;
    for(int i = 0; i<=range/2; i++){
        
        if(isSubsetSum(arr,n,i)){
            mini = min(mini,range - 2*i);
        }
    }
    std::cout << mini << std::endl;
}

int main(){
    std::vector<int>arr={1, 6, 11, 5};
    
    minimumDiff(arr);
    return 0;
}