/*
int* sortExceptK(int arr[], int n, int k)
{
	// Complete the function
	
	 int temp  = arr[k];
	 
	 arr[k] = 0;
	 sort(arr,arr+n);
	 
	 for(int i = 0; i<k;i++){
	     arr[i] = arr[i+1];
	 }
	
	arr[k] = temp;
	  
	 return arr;
}
*/

// logic store the kth element and put the 0 at the place of k so
// one place is empty  and traverse the array up to k place so the is one 
// place is left and then put the stored kth element at the place of k in the arry.