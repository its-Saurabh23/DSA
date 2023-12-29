// T.C.  long(k);
class Solution {
public:
  typedef pair<int ,int>p;
    vector<int> topKFrequent(vector<int>& nums, int k) { 
       unordered_map<int,int>mp;
       for(auto & it: nums){
           mp[it]++;
       }
    //     define priority_queue min_haep
    priority_queue<p ,vector<p>,greater<p>> pq;

    for(auto  &it :mp){
        int val = it.first;
        int freq = it.second;

        // push into queue;
        pq.push({freq,val});
        
        // min_heap should be less than  <k
        if(pq.size()>k){
          pq.pop();
        } 
    }
    // make a result;
    vector<int>ans;
    while(!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;

    }
};