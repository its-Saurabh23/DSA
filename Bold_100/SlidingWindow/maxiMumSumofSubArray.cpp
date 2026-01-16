 #include<bits/stdc++.h>
 using namespace std;
 
 int maxiMumSumOfSubArray(vector<int>&arr,int k){
     
     int windowSum = 0;
     for(int i =0; i<k; i++){
         windowSum += arr[i];
     }
     
     int maxiSum = 0;
     
     for(int i = k; i<arr.size(); i++){
        windowSum += arr[i];
        windowSum -= arr[i-k];
        
        maxiSum = max(maxiSum,windowSum);
     }

  return maxiSum;
 }
 
 int main(){
     
    vector<int>arr={2, 1, 5, 1, 3, 2};
    int k = 3; // fixed size window
    int result = maxiMumSumOfSubArray(arr,k);
     std::cout << result << std::endl;
     return 0;
 }