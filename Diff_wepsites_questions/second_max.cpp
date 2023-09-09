/* 
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	   
	   sort(arr,arr+n);
	   
    int max1 = 0;
    int max2 = -1;
    
    // find the maximum element
    for(int i =0;i<n;i++){
        
        if(arr[i]>max1){
            max1 = arr[i];
        }
    }
    
    for(int i = 0;i<n;i++){
        
        if(arr[i]>max2 && arr[i] != max1){
            max2 = arr[i];
        }
    }
	  return max2; 
	}   
};
 */

// logic find the first maximun 
// and then find another maximun but not equal to first maximum that is your ans..