
// brute foce will be .. apply 4 lops and add in the set and then retrive form the set..
// T.C =  O(n4)


vector<vector<int>> fourSum(vector<int>& nums, int target) {      
        sort(nums.begin(),nums.end());

        // size of vector
        int n = nums.size();

       

        // ans vector
        vector<vector<int>>ans;
      
        //edge case
        if(nums.empty()){
         return ans;
        }
      // taking set for removal of duplicate 
        set<vector<int>>st;

        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n ;j++){
            //main logic
            long long target2 = (long long) target -(long long)nums[i] -(long long)nums[j];

            // apply two sum logic
            int left  = j+1;
            int right = n-1;
            while(left<right){
            if(nums[left]+nums[right] == target2){
               st.insert({nums[i],nums[j],nums[left],nums[right]});
               left++;
               right--; 
            }
            else if(nums[left]+nums[right] > target2){
                right--;
            }
            else{
                left++;
            }
            } 
            }
        }
    for(auto it:st){
        ans.push_back(it);
    } 
    return ans;
    }