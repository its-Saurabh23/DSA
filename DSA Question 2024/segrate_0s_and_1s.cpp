void segregate0and1(int arr[], int n) {
      // T.C = O(n * n)
    int zeroCount = 0;
    int oneCount = 1;
    
    for(int i = 0; i<n; i++)
    {
        if(arr[i] ==0){
            zeroCount++;
        }
        else{
            oneCount++;
        }
    }
    
    //  insert the zero count element
    for(int i =0; i<zeroCount; i++){
        arr[i] = 0;
    }
    
    // insert the one count element;
    
    for(int i = zeroCount; i<n; i++){
        arr[i] = 1;
    }
    
    int start = 0;
    int end = n-1;
    
    while(start<end){
        if(arr[start] == 0){
          start++;  
        }
        else{
            
            if(arr[end]  == 0){
            swap(arr[start],arr[end]);
            start++;
            end--;
         }
         else{
             end--;
         }
        }
    
    }
    
    
    
  // T.C = O(n * n)
      for(int i = 0; i<n; i++){
          if(arr[i] == 0)continue;
          
          for(int j = i+1; j<n; j++){
             
             if(arr[j]==0){
                 swap(arr[i],arr[j]);
             } 
          }
      }
    }