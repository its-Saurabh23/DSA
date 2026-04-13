int* optimalSolution(int arr[],int n){
    
    if(n == 0){
        return NULL;
    }
    
    int * result = new int [n];
    result[0] = 1;
    
    for(int i= 1; i<n; i++){
        result[i] = result[i-1]*arr[i-1]; 
    }
    
    int right = 1;
    
    for(int i = n-1; i>=0; i--){
        result[i] = result[i]*right;
        right *= arr[i];
    }
    return result;
}

int* productOfArrayExceptItslefOptimzed(int arr[],int n){
    
    if(n == 0){
        return 0;
    }
    
    int maxProduct = 1;
    int *resultArr = new int[n]; 
    
    for(int i = 0; i<n; i++){
        maxProduct *= arr[i];
    }
    
    for(int i = 0; i<n; i++){
        resultArr[i] = maxProduct/arr[i];
    }
    return resultArr;
}

int* productOfArrayExceptItslef(int arr[],int n){
    
    if(n == 0){
        return NULL;
    }
    
    int* result = new int[n];
    
    for(int i  = 0; i<n; i++){
        int product = 1;
        
        for(int j = 0; j<n; j++){
            if( i != j){
             product *= arr[j]; 
            }
        }
        result[i] = product;
    }
    return result;
}
