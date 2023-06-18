/*
complexity is O(n);

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1, end= -1;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                start = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(nums[i] == target){
                end = i;
                break;
            }
        }
        return {start,end};
    }
};


complexity is O(lon n)


class Solution {
    private:
    int firatvalue(vector<int> &nums,int start,int end,int target){
        
        while(start<=end){
           int mid = start + (end-start)/2;

           if(nums[mid]<target){
               start = mid+1;
           }
           else{
               end = mid-1;
           }
        }
        return start;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // step 1 find low 

        int start = 0,end = nums.size()-1;

        int startPosition = firatvalue(nums,start,end,target);
        int endPosition = firatvalue(nums,start,end,target+1)-1;
        
        if(startPosition < nums.size() && nums[startPosition] == target){
            return {startPosition,endPosition};
        }
  return {-1,-1};
    }
};

*/