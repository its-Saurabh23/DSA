int getLongestZeroSumSubarrayLength(vector<int> &arr){
   
// Brute force will be 
// generate all the sub Array . it will take O(n3) to O(n2)


T.C = O(N log N) 
S.C  = O(n)
// kadan algo..
   int n = arr.size();
	unordered_map<int,int>mpp;
    int sum = 0;
	int ansCount =0;
   for(int i = 0; i<n;i++){
	   sum+= arr[i];
	   
	   if(sum == 0){
        ansCount = i+1;
	   }

	   else{
		   // element is present in map
		   if(mpp.find(sum) != mpp.end()){
             ansCount = max(ansCount,i-mpp[sum]);
		   }
		   else{
			   mpp[sum] = i;
		   }
	    }
   }
   return ansCount;
	
}
