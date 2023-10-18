// remember the logic that numbers are startig with (even,odd) fasion

public:
    int singleNonDuplicate(vector<int>& nums) {
     int n = nums.size();

     if(n ==1) return nums[0];
     if(nums[0] != nums[1])return nums[0];
     if(nums[n-1] != nums[n-2]) return nums[n-1];


     int l  = 1;
     int h = n-2;
     
     while(l<=h){
         int mid = (l+ h)/2;
        
        if(nums[mid] != nums[mid -1] && nums[mid] != nums[mid+1]){
            return nums[mid];
        }

        if( (mid % 2 == 1  && nums[mid-1] == nums[mid])
         || (mid% 2 == 0 && nums[mid] == nums[mid+1]) ){
           // element in the left half
           l = mid+1;
        } 
        else{
            // element int the right half
            h = mid-1;
        }
     }
     return -1;
    }