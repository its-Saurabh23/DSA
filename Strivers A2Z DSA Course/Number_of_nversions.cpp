/* brute force genrate all the pairs with O(n2) complixity ..
Merge Sort Solution .. 
create two sorted array with merge sort and compare one element to other's array one element 
and it will be conform that if  one element is greater then other's array element than all the rest
of element are also greater than others array element..  */  
int merging(vector<int>&a,int low,int mid,int high){

    // temporary array
    vector<int>temp;
    int left = low;
    int right = mid+1;
    
    int cnt = 0; // holding the pair count
    
    while(left<=mid && right<=high){
        if(a[left]<=a[right]){
            temp.push_back(a[left++]);
        }
        else{
          temp.push_back(a[right++]);
          // determing the count of pairs
          cnt += (mid-left)+1;
        }
    }
   // rest of the elements if they exit
   while(left<=mid){
       temp.push_back(a[left++]);
   }
   while(right<=high){
       temp.push_back(a[right++]);
   }
    // put all the elements in the original array 

    for(int i =low;i<=high; i++){
        a[i] = temp[i-low];
    }
   return cnt;
}
int mergeSort(vector<int>&arr,int low,int high){
    
    int cnt = 0;
    if(low>=high) return cnt;
    //mid
    int mid = (low + high)/2;
    // recursive call
    cnt += mergeSort(arr,low,mid);  // left
    cnt += mergeSort(arr,mid+1,high); // right

    // merging the two sorted array
    cnt += merging(arr,low,mid,high);

    return cnt; 
}

int numberOfInversions(vector<int>&a, int n) {
    return mergeSort(a,0,n-1);
}

