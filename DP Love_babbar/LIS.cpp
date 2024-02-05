class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        // create an empty arry
        vector<int>sorted;
        int n = nums.size();

        for(int i = 0;i<n;i++){
            auto  it = lower_bound(begin(sorted),end(sorted),nums[i]);
            // it will give the just greater then or equal to the element
         if(it == end(sorted)){
             sorted.push_back(nums[i]); // if we found the gretest element

         }   
         else{
            //  found then replce
            *it = nums[i]; 
         }    

        }
        return sorted.size();
    }
};

// O(nlong(n)) => T.C.