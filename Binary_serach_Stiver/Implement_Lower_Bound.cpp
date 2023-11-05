// lower bound condition
// array must be sorted  

//it will return the smallest index such that arr[n]>= target 
int lowerBound(vector<int> arr, int n, int x) {
	
   int low = 0,high = n-1;
   int ans = n;
   while(low<=high){
    int mid = (low + high)/2;

    if(arr[mid]>=x){
      ans = mid;
      high = mid-1;
    }
    else{
     low = mid+1;
    }
   }
   return ans;

}