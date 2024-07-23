class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
          unordered_set<int>st; 
        
        for(int i = 0; i<nums.size(); i++){
            
           if(st.find(nums[i]) != st.end()){
                return true;
            }          
            
            st.insert(nums[i]);
        }
        return false;
    }
};




class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        
        for(int num :nums){
            mp[num]++;
            if(mp[num]>1){
                return true;
            }
        }
        return false;
    }
};