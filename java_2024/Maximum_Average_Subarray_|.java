class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int sum = 0;
        for(int i = 0; i<k; i++){
            sum += nums[i];
        }

        int maxSum = sum;
        // apply sliding window

        int startIndex  = k;        
        int endIndex = k;

        while(endIndex < nums.length){            
            sum -= nums[startIndex - k];
            startIndex++;   
            sum += nums[endIndex];
            endIndex++;

            maxSum = Math.max(maxSum,sum);   
        }

     return (double) maxSum/k;
    }
}