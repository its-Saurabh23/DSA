 /*
 void nextPermutation(vector<int>& nums) {
    int inflectionPoint = 0;
   //step 1 find the inflection point 
    int n = nums.size()-1;
   
  for(int i = n ; i>0; i--)
    {
     if(nums[i]>nums[i-1]){
       inflectionPoint = i ;
       break; 
    }
}
    
    if(inflectionPoint == 0){
        sort(nums.begin(),nums.end());
    }
    else 
    {
        int mini  = INT_MAX;
      //step 2  find the privous element of inflectionPoint 

       int toswap = nums[inflectionPoint-1];

      // step 3 swap this element with its next greater element 
       
       for(int j= inflectionPoint; j<=n; j++){

         if(nums[j]- toswap> 0 && nums[j]-toswap <mini)
         {
        //    swaping 
         int temp = nums[j];
         nums[j] = nums[inflectionPoint-1]; 
         nums[inflectionPoint-1] = temp;
         }   
       } 
       sort(nums.begin() + inflectionPoint,nums.end());  
    }

*/