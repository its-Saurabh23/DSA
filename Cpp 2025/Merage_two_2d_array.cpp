class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
         
         int n1 = nums1.size(); 
         int n2 = nums2.size();
        
        int i = 0;
        int j = 0;

        vector<vector<int>>ans;
        while(i<n1 && j<n2){
              
              if(nums1[i][0] > nums2[j][0]){
                     ans.push_back({nums2[j][0],nums2[j][1]});
                     j++;
              }else if(nums1[i][0] < nums2[j][0]){
                ans.push_back({nums1[i][0],nums1[i][1]});
                     i++;
              }else{
                int sum = nums1[i][1] +nums2[j][1]; 
                ans.push_back({nums1[i][0],sum});
                i++;
                j++;
              }
        }
        while(i<n1){
            ans.push_back({nums1[i][0],nums1[i][1]});
            i++;
        }
        while(j<n2){
        ans.push_back({nums2[j][0],nums2[j][1]});
        j++;
        }
        return ans;

    }
};



class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        
        unordered_map<int,int>mp;
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        for(int i = 0; i<n1; i++){
            int id = nums1[i][0];
            int value = nums1[i][1];
            mp[id] += value;   
        }
        for(int j = 0; j<n2; j++){
            int id = nums2[j][0];
            int value = nums2[j][1];
            mp[id] += value; 
        }

        vector<vector<int>>ans;

        for (const auto& [id, value] : mp) {
            ans.push_back({id, value});
        }
    
      sort(begin(ans),end(ans));
      return ans;
    }
};


//by Map

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        
        map<int,int>mp;
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        for(int i = 0; i<n1; i++){
            int id = nums1[i][0];
            int value = nums1[i][1];
            mp[id] += value;   
        }
        for(int j = 0; j<n2; j++){
            int id = nums2[j][0];
            int value = nums2[j][1];
            mp[id] += value; 
        }

        vector<vector<int>>ans;

        for (const auto& [id, value] : mp) {
            ans.push_back({id, value});
        }
    
    //   sort(begin(ans),end(ans));
      return ans;
    }
};