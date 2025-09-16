// A permutation is a Sequence of arragement or ordering of elements
// eg {1,2} can we arrage as {1,2} {2,1}  factorial of that thing 

#include<bits/stdc++.h>
using namespace std;


void permu(vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp,vector<bool>&visited){
  if(nums.size() == temp.size()){
        ans.push_back(temp);
        return;
  }
  for(int i=0;i<nums.size(); i++){  
    //step 1 visited mark
    if(visited[i] == 0){
      visited[i] = 1;
      //step-2 temp store
      temp.push_back(nums[i]);
      //step-3 recursive call
      permu(nums,ans,temp,visited);

      // step-4 backtracking
       // unvisite
       visited[i] = 0;
       temp.pop_back();
    }
  } 
}

int main(){
  vector<int>nums={1,2,3};
  vector<vector<int>>ans;
  vector<int>temp;
  vector<bool>visited(nums.size(),0);
  permu(nums,ans,temp,visited);
   
  for(int i=0; i<ans.size(); i++){
    for(int j =0;j<ans[i].size(); j++){
         cout<<ans[i][j]<<" ";
    }cout<<"\n";
  }

  // cout<<"Brute force Apporch"<<"\n";
  
  // for(int i = 0; i<nums.size(); i++){
  //       for(int j = 0; j<nums.size(); j++){
  //         for(int k = 0; k<nums.size(); k++){
  //              if(i != j && j !=k && i != k){
  //                 cout<<"{"<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<" }\n";
  //              }
  //         }
  //       }
  //   }
   return 0;
}