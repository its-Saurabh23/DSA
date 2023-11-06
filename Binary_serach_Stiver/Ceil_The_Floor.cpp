pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {

  int ans1  = -1;
  int ans2  = -1;
  int low = 0;
  int high = a.size()-1;

  while(low<=high){
	  int  mid = (low + high)/2;
      
	  if(a[mid] == x ){
		  return {a[mid],a[mid]};
	  }
	  if(a[mid]> x){
		  ans1 = a[mid];
		  high = mid-1;
	  }
	  else{
		  ans2 = a[mid];
		  low = low + 1;
	  }
  }
  return {ans2,ans1};
}