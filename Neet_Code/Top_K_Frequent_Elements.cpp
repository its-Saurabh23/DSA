#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k)
{

    typedef pair<int,int>p;
    int n = nums.size();
    unordered_map<int,int> mp;  
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }
    
   priority_queue<p,vector<p>,greater<p>>pq; 
   
   for(auto &it:mp){
    int val = it.first;
    int freq = it.second;

    pq.push({freq,val});

    if(pq.size()>k){
         pq.pop();
    }
   }
   vector<int>result;
   while (!pq.empty())
   {
     result.push_back(pq.top().second);
     pq.pop();
   }
   
    return result;
}

int main()
{      // Test cases..
    // vector<int> nums = {1, 1, 1, 2, 2,3,3,3,3};
    // vector<int> nums = {1,1,1,2,2,3};
    vector<int>nums = {-1,-1};
    int k = 1; 
 
    vector<int> result = topKFrequent(nums, k);
    for(auto it: result){
        cout<< it <<" ";
    }

    cout<<endl;
    return 0;
}