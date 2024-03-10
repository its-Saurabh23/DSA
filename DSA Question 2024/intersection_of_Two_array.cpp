// T.C = O(n) + O(n) = 2 O(n)  ~ O(n);
// S.C = O(1);

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int>mp;
        for(int i =0; i<nums1.size(); i++){
            mp[nums1[i]] = 1;
        }

        vector<int>ans;
        for(int i = 0; i<nums2.size(); i++){
         if(mp.find(nums2[i]) != mp.end() && mp[nums2[i]] == 1){
            ans.push_back(nums2[i]);
            mp[nums2[i]]++;
         }
        }
       return ans;
    }
};