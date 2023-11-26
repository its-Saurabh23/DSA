class Solution {
public:
    int peakIndexInMountainArray( MountainArray &mountainArr) {
   
        int n = mountainArr.length();
        
        int low = 0;
        int high = n-1;

        while(low<high){
            int mid = low + (high-low)/2;

            if(mountainArr.get(mid)< mountainArr.get(mid +1)){
                low = mid +1;
            }
            else{
                high = mid;
            }
        } 
        return low ;
    }

    int BinarySerach(MountainArray &mountainArr,int low,int high,int target){
     int mid;

     while(low<=high){
         mid = low + (high - low)/2;

         if(mountainArr.get(mid) == target){
             return mid;
         }
        else if(mountainArr.get(mid)>target){
            high  = mid -1;       // ascending order array 
        }
        else{
            low = mid + 1;       // ascending order array 
        }
     }
     return -1;
  }

    int reverseBinarySearch( MountainArray &mountainArr,int low,int high,int target){
        
        int mid;
         
         while(low<=high){
             mid = low + (high - low)/2;
             if(mountainArr.get(mid) == target){
                 return mid;
             }
             else if(mountainArr.get(mid) > target){
                low = mid + 1;    // decreasing order array
             }
             else{
                high = mid - 1;   // decreasing order array 
             }
         }
         return -1;
    }

    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int index = peakIndexInMountainArray(mountainArr);

        int result_idx = BinarySerach(mountainArr,0,index,target);

        if(result_idx != -1){
            return result_idx;
        }

         // idx +1 to n-1 
        result_idx = reverseBinarySearch(mountainArr,index+1 , n-1,target);
          
        return result_idx;
    }
};