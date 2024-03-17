// T.C - O(n);

// Treat 0 as -1 and 1 = +1 ;


class Solution {
    public int findMaxLength(int[] nums) {
        int ans = 0;
       
        HashMap<Integer,Integer>mp  = new HashMap<>();
        mp.put(0,-1);

        int sum = 0;  
        for(int i = 0; i<nums.length; i++){
             if(nums[i] == 0){
                sum += -1;
             }
             else if(nums[i] == 1){
                sum += +1;
            }
          if(mp.containsKey(sum)){
            int idex = mp.get(sum);
            int len = i - idex;
             if(len > ans){
                ans = len;
             }
            }
            else{
                mp.put(sum ,i);
            } 
        } 
        return ans;
    }
}