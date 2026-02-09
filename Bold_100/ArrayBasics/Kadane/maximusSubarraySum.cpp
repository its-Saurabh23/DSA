#include<bits/stdc++.h>
using namespace std;


//kadane's algo
int solve(vector<int>&arr){
    int current_sum = 0;
    int maxiMumSum = 0;
    
    for(int i = 0; i<arr.size(); i++){
        current_sum = max(current_sum+ arr[i] ,arr[i]);
        maxiMumSum = max (current_sum,maxiMumSum);
    }
    return maxiMumSum;
    
}

int main(){
        
    vector<int>arr ={1,2,-3,1,10,-11};
    int result = solve(arr);
    std::cout << result << std::endl;
    return 0;
}