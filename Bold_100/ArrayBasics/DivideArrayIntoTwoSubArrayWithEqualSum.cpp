#include<bits/stdc++.h>
using namespace std;

bool isDivisble(vector<int>& arr){
    int n = arr.size();
     if(n == 0){
        return false; 
     }
     
     int totalSum = 0;
     for(int i = 0; i<n; i++){
         totalSum += arr[i];
     }
     
     int preSum = 0;
     int ans = 0;
     for(int i= 0;i <n-1; i++){
         preSum += arr[i];
         ans = totalSum - preSum;
         
         if(ans == preSum){
             return true;
         }
     }
     return false;
}

int main(){
    
    std::vector<int>arr={3,4,-2,5,8,20,-10,8};
    int result = isDivisble(arr);
        if(result){
            std::cout<<"Possible" << std::endl;
        }else{
            std::cout<<"Not Possible "<<std::endl;
        }
    
    return 0;
}