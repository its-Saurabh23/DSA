#include<bits/stdc++.h>
using namespace std;


void solve(vector<int>nums,vector<int>output,int index,vector<vector<int>>& ans){

//  base case 

if(index >=nums.size()){
  ans.push_back(output);
    return;
}

// exclude 
solve(nums,output,index+1,ans);

// include

int element =nums[index];
output.push_back(element);

solve(nums,output,index+1,ans);
}


int main(){
vector<int> nums = {1,2,3};
vector<vector<int>> ans;
vector<int>output; 

int index = 0;
solve(nums,output,index,ans);
    return 0;
} 