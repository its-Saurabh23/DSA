//  step 1  do the Transpose of array 
 int n = mat.size();

 for(int i = 0;i<n-1; i++){

   for(int j = i+1; j<n;j++){
    swap(mat[i][j],mat[j][i]);
   }
 }

 // Now to the reversal of the mat
   
   for(int i = 0; i<n; i++ ){
     reverse(mat[i].begin(),mat[i].end());
   }


 // Brute for
 // use another martize and copy the original in an appropate manner..  