class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int n = nums.size()-1;
        int left = 0;
        int right = n;
        
        //  if nums is whole sorted
        if(nums[0] <= nums[right]){
            return nums[0];
        }

        while(left<=right){
            int mid = (right +left)/2;
        
        if(nums[mid]>nums[mid+1]){
            return nums[mid+1];
        } 
        else if(nums[mid]<nums[mid-1]){
            return nums[mid];
        }
        else if(nums[left]<=nums[mid]){
            left = mid+1;
        }
        else if(nums[mid]<=nums[right]){
            right = mid -1;
        }
        }
        return -1;
    }
};




// Binary search  T.C = log(n);


class Solution {
public:
    int findMin(vector<int>& nums) {
     int n = nums.size();
     int start = 0, end = n-1, ans = nums[0];

     while(start<= end){
         int mid = start +(end - start)/2;

        //  left sorted
        if(nums[mid]>=nums[0])
        start = mid + 1;
        // right sorted
        else {
            ans = nums[mid];
            end = mid - 1;
        }
     }
     return ans;   
    }
};