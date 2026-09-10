#include<bits/stdc++.h>
using namespace std;

class Solution{
    
    public:
    vector<vector<int>>ans;
    
    void solve(vector<int>arr,int start,int target,vector<int>&curr){
          
        // base case 
        if(target == 0){
               ans.push_back(curr) 
               return;
           }
        
           for(int i = start; i<arr.size(); i++){
             
            if(arr[i]>target){
                break;
             }
             
             curr.push_back(arr[i]);
             // explor 
             solve(arr,i,target-arr[i],curr);
             curr.pop_back();
           }
           
    }

    vector<vector<int>>CombinationSum(vector<int>arr,int target){
       
      sort(CombinationSum.begin(),CombinationSum.end());
      vector<int>curr;
      solve(arr,0,target,curr);
      return ans;
    }

};


int main(){

}
