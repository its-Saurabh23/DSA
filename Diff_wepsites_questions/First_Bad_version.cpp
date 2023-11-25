   
//    isBadVersion is given in question 
  // Application of binary search 
    int firstBadVersion(int n) {
    
        int ans = -1;
        int low  = 0;
        int high = n;

        while(low<= high){
            int mid = low + (high -low)/2;

            if(isBadVersion(mid)){
                ans = mid;
                high = mid-1;
            } 
            else{
               low = mid + 1; 
            }
        }
        return ans;
    }

};