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

 /******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr,int k){
    
    if(arr.size()<0){
        return 0;
    }
    
    int maxSum = INT_MIN;
    int currentSum = 0;
    for(int i = 0 ;i<arr.size(); i++){
        
        currentSum += arr[i];
        if(i>=k-1){
            maxSum = max(maxSum,currentSum);
            //update the current Sum;
            currentSum -= arr[i-(k-1)];
        }
    }
    return maxSum;
}

int main()
{
   vector<int>arr={4,2,1,7,8,1,2,10};
   int k = 3;
   int result = solve(arr,k);
   cout<<result
;
   
    return 0;
}