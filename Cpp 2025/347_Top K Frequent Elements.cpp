class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

     unordered_map<int,int>mp;
     for(int num :nums){
        mp[num]++;
     }
                   // val  // key 
      priority_queue<pair<int, int>>pq;
     for(auto &it : mp){
        pq.push({it.second, it.first});
     }

    vector<int>ans;
    for(int i = 1; i<=k; i++){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
    }
};