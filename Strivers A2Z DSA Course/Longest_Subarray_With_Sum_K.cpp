int getLongestSubarray(vector<int>& nums, int k){

// prefixSum method

map<long long,int>preSum;
long long sum = 0;
int maxLen = 0;

for(int i =0; i<nums.size(); i++){

sum += nums[i];

if(sum == k){
    maxLen = max(maxLen,i+1);
}
// main logic for prefixSum 
   
   // if it is prevesly sotred element int the array
long long rem = sum - k;

if(preSum.find(rem) != preSum.end()){
    // finding the length in the map

    int len = i - preSum[rem];
    maxLen = max(maxLen,len);  
}

// now for zeros

if(preSum.find(sum) == preSum.end()){
     //value     key
    preSum[sum] = i;
}

}
return maxLen;
