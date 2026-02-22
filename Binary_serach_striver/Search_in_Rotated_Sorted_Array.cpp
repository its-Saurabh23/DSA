  //find out the sorted array first and then disgard the search space 
  int search(vector<int>& nums, int target) {
        int n = nums.size()-1;
        int l = 0, h = n;

        while(l<=h){
            int mid = (l+h)/2;
            if(nums[mid] == target)return mid;

            if(nums[l]<=nums[mid])
            {
             if(nums[l]<=target && target <=nums[mid]){
                 h = mid-1;
             }
             else{
                 l = mid+1;
             }
            }
            else{
             
                if(nums[mid] <= target && target <= nums[h]){
                l = mid + 1;
             }
             else{
               h = mid-1;
             }
            }
        }
        return -1;
    
    }






class Solution {
public:
    int search(vector<int>& nums, int target) {
      int n = nums.size();
      int start = 0,end = n-1, mid;

      while(start<=end){
          mid  = start + (end - start)/2;
           
          if(nums[mid] == target)
          return mid;
        //left sorted      
          else if(nums[mid]>= nums[0]){
              if(nums[start]<= target && nums[mid]>= target){
                  end = mid - 1;
              }
              else{
                  start = mid + 1;
              }
          }
        //Right sorted
          else{
              if(nums[mid]<= target && nums[end] >= target){
                  start = mid + 1;
              }
              else{
                 end = mid -1; 
              }
          }
        }
        return -1;
    }
};
