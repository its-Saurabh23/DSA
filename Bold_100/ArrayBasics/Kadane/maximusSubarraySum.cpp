#include<bits/stdc++.h>
using namespace std;

void print(vector<int>&arr){
   int startIndex = 0; int endingIndex = 0;
   int current_sum = 0;
   int maxiMumSum = INT_MIN;
   int tempIndex = 0;
   
   for(int i = 0; i<arr.size(); i++){
        current_sum += arr[i];
        
       if(current_sum>maxiMumSum){
           
        maxiMumSum = current_sum;
        startIndex = tempIndex;
        endingIndex = i;
       }
       if(current_sum<0){
           current_sum = 0;
           tempIndex = i + 1;
       }
   }
   cout<<"Maximum Sum is "<<maxiMumSum<<"\n";
   cout<<"Subarray of Maximum sum"<<"\n[";
   for(int i = startIndex; i<=endingIndex; i++){
       if(i == endingIndex){
           cout<<arr[i];
           break;
       }
       cout<<arr[i]<<",";
   }
   cout<<"]";
    
}


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

    // vector<int>arr ={1,2,-3,1,10,-11};
    vector<int>arr ={2, -1, 3, -2 }; // for prining example use this.
    int result  solve(arr);
    std::cout << result << std::endl;
    return 0;
}