int binarySearch(int arr[],int low,int heigh,int target){
    
    if(low>heigh){
        return -1;
    }

    int mid = low + (heigh-low)/2;
    
    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid]>target){
     return binarySearch(arr,low,mid-1,target);
    }else{
      return binarySearch(arr,mid+1,heigh,target);
    }
    return -1;
}

int binarySearch(int arr[],int n,int target){
    
    int low = 0;
    int heigh = n -1; 
    
    while(low <= heigh){
        int mid = low + (heigh-low)/2;
        
        if(arr[mid] == target ){
            return mid;
        }
        else if(arr[mid]>target){
            heigh = mid-1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}
