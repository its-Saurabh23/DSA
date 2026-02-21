// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int findEquilibriumIndex(vector<int>&arr){
    long long totalSum = 0;

    for(int x : arr){
        totalSum += x; 
    }
    cout<<"totalSum "<<totalSum<<"\n";
    
    long long leftSum = 0;
    for(int i = 0; i<arr.size(); i++){
       
        if(leftSum == totalSum - leftSum - arr[i]){
            return i;
        }
        leftSum += arr[i];
    }
    return -1;
}

int main() {

    std::cout << "Try programiz.pro"<<"\n";
    vector<int>arr={-7, 1, 5, 2, -4, 3, 0};
    int result = findEquilibriumIndex(arr);
    std::cout<<result<<"\n";
    return 0;
}