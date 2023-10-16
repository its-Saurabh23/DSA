
// remember the this case
// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3

//  just swaping two valuses..
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
       int left = m-1;
       int right = 0;

       while( left>=0 && right<n ){

           if(nums1[left]>nums2[right]){
               swap(nums1[left],nums2[right]);
               left--;
               right++;
           }
           else{
               break;
           }
          
       } 
       for(int i=m;i<m+n;i++){
            nums1[i]=nums2[i-m];
        }
        
       sort(nums1.begin(),nums1.end());
    
       
    }