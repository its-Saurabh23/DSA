
// Think about the mid and last elemtn comparsion and take decesion 

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int h =nums.size()-1;

        while(l<h){
            int mid = l+(h-l)/2;

            if(nums[mid]>nums[h]){
                l = mid + 1;
            }
            else if(nums[mid]<nums[h]){
               h = mid;
            }
            else{
                h--;
            }
        }
        return nums[l];
    }
};