
//  Taking an empty array 
// put all the negative element at negative index or put all the positve element at positve index.
/* vector<int> rearrangeArray(vector<int>& nums) {
     int n = nums.size();
     // ans array 
     vector<int>ans(n,0);

     int postiveIndex = 0;
     int negativeIndex = 1;

     for(int i = 0; i<n; i++){

         if(nums[i]>0){
         ans[postiveIndex] = nums[i];
         // posive index
         postiveIndex += 2;
         }

         else{
         ans[negativeIndex] = nums[i];
          //negative index..
         negativeIndex += 2;
         }
     }   
      return ans;
    }  */

 // T.C - O(n)
// S.C - O(n)

