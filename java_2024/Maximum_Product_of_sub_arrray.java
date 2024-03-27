class Solution {
    public int maxProduct(int[] nums) {

       int product = 1;
       int maxproduct = Integer.MIN_VALUE;

       for(int i = 0; i<nums.length; i++){
           
           product =  product * nums[i];
           maxproduct = Math.max(maxproduct,product);

           if(nums[i] == 0){
              product = 1;
           }
       }   

       product  = 1;
       
       for(int i = nums.length -1 ; i>=0; i--){
         product = product * nums[i];
         maxproduct = Math.max(maxproduct, product);
         if(nums[i] == 0){
            product = 1;
         } 
       } 
    return maxproduct;
    }
}