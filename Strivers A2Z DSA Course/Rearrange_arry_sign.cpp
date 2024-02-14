
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

// Brute force 
vector<int> rearrangeArray(vector<int>& nums) {
        int  n = nums.size();

        vector<int>pi,ni,result;

        for(int i = 0; i<n; i++){
            if(nums[i]>0){
                pi.push_back(nums[i]);
            }
            else{
               ni.push_back(nums[i]);
            }
        }

         int i= 0, j = 0;
        
        while(j <n/2){
           result.push_back(pi[i]);
           i++;
           result.push_back(ni[j]);
           j++;
        }
        return result;
    }

