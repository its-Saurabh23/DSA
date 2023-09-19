/*
class Solution{
public:	
	 
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    
	    //sorting 
	    sort(arr,arr+n);
	    int i = 0;
	    n --;
	    while(i<n){
	        if(arr[i]+arr[n] == x){
	            return  true;
	        }
         // if the value is grater, then decrese the last pointer   
	        if(arr[i]+arr[n]>x){
	            n--;
	        }
	        else{
	            i++;
	        }
	    }
	    return false;
	}
};
*/
// T.C  o(n)
 //logic two pointer appoarch one pointer from  staring and another from end. 
