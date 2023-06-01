#include <bits/stdc++.h>
using namespace std; 
long long maxSubarraySum(int arr[], int n)
{
   int cureentSum = 0;
   int MaxSum =0;
   
   for(int i =0; i<n; i++){
     
     cureentSum = cureentSum+arr[i];
    //  taking maximum sum
    MaxSum = max(cureentSum,MaxSum);

    // checking the current sum is zero or not;
     
     if(cureentSum<0){
         cureentSum = 0;
     }
  }
  return MaxSum;
    
}
int main(){
    int n = 15;
    // cin>>n;
    int arr[n]={-7,-8,-16,-4,-8,-5,-7,-11,-10,-12,-4,-6,-4,-16,-10 };
   

int result = maxSubarraySum(arr,n);
 cout<<result<<endl;
}