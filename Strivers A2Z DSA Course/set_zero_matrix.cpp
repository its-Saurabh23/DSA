//Brute one 
/* find the zeros and marks the cloums and row of the zero index by -1;
 itrate agin and do all the -1 to 0 ;

 sudo code is
for(i =0->n){
        //for(j=0->m){
        // if(arr[i][j] == 0){
           //call mark funciton 
              // markrow[i] 
               // markrow[i] }  }  }
                           
markrow(i){
      for(i=0->n){
          if(arr[i][j] ! =0){
              arr[i][j] =-1; }}
similaerly for markcol 
last loop for making all the -1 to 0;

*/
// better solution 

//take mark array and intilise it with 0 if it get  0 in the matrix then mark it 1 
// after all traversal check which are marked in the mark array and do a reitration and mark all the //coloum or row as 0; 

// making the 0 by 1 
 int col[n] ={0};
int row[m]= {0};
    
	// Marking the Matrix..
	  for(int i =0; i<n; i++){
		  //coloumn 
		  for(int j = 0;j<m;j++){
           if(matrix[i][j] == 0){
                            // marking
			   col[i] = 1;
			   col[j] = 1;
		   } 
		  }
	  }

	//Re-itrating the array and doing all the
	for(int i =0;i<n; i++){
		//coloumn
		for(int j=0;j<m; j++){
			if(col[i] || row[j]){

				matrix[i][j] = 0;
			}
		}
	} 
	return matrix;