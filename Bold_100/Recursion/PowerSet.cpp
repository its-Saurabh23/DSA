#include<bits/stdc++.h>
using namespace std;

void PowerSet(vector<int>&nums,int index,vector<vector<int>>&ans,vector<int>&curr){
   if(index == nums.size()){
       ans.push_back(curr);
       return;
   }
   PowerSet(nums,index+1,ans,curr);
   curr.push_back(nums[index]);
   PowerSet(nums,index+1,ans,curr);
   curr.pop_back();
}

int main(){
    vector<int>nums={1,2};
    vector<vector<int>>ans;
    vector<int>curr;
    PowerSet(nums,0,ans,curr);

    for(auto& it:ans){
      cout<<"{";
      for(int x:it){
        cout<<x;
        if(it.size()>1){
            if(x == it.size()){
                continue;
            }
          cout<<",";
        }
      } 
      cout<<"}\n";
    };
    return 0;
}