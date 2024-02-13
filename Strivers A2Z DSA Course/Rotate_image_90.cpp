//  step 1  do the Transpose of array 
 int n = mat.size();

 for(int i = 0;i<n-1; i++){

   for(int j = i+1; j<n;j++){
    swap(mat[i][j],mat[j][i]);
   }
 }

 // Now to the reversal of the mat in row wise
   
   for(int i = 0; i<n; i++ ){
     reverse(mat[i].begin(),mat[i].end());
   }

//This is rotation in clockwies direction 
 // Brute for
 // use another martize and copy the original in an appropate manner..  



//This is rotation in  anti clockwies direction 
	void rotateMatrix(vector<vector<int>>& arr, int n) {
    //  step 1  do the Transpose of array 
    for (int i = 0; i < n; i++){
           for (int j = i; j < n; j++){
                  swap(arr[i][j], arr[j][i]);
	        }
	   }
	        // reverse Columns
        for (int i = 0; i <n/2; i++){
               swap(arr[i],arr[n-i-1]);
           }
 	}
