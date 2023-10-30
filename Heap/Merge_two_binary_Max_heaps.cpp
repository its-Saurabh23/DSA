// logic combine two array and convert this resultant arry into max heap

class Solution{
    public:
       void heapify(vector<int>&arr,int size,int i){
        
        // we are comparing ourleft and right with i index
        int largest = i;
        int left = 2*i+1;  // zero based indexing
        int right = 2*i+2;
        
        if(left< size && arr[largest]<arr[left]){
            // update index
            largest = left;
        }
        if(right<size && arr[largest]<arr[right]){
            // update index
            largest = right;
        }
        
        if(largest != i){
            swap(arr[largest],arr[i]);
            heapify(arr,size,largest);
        }     
        
    } 
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
    //ans vector
    vector<int> ans;
    for(auto i:a){
        ans.push_back(i);
    }
    for(auto i:b){
        ans.push_back(i);
    }
    
    int size = ans.size();
    // call heapiy function
    
     // n/2 because leaft node are already a heap by this consideration
     // Number of leaf node (n/2+1)
     // due to zero based index
    for(int i = size/2  - 1 ; i>=0; i--){
        heapify(ans,size,i);
    }
   
    return  ans;
     
    }