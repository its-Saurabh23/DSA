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