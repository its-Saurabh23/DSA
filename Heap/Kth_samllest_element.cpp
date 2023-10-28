
// using heap data structure..
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        
        // creating max heap
        priority_queue<int>pq;
        
        // push to max heap
        for(int i= 0; i<k; i++){
          pq.push(arr[i]);    
        }
        
        // step 2 checking the root node elemnt to the rest of the element(after k element)
        
        for(int i = k; i<=r; i++){
            
            if(arr[i]<pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        
        int ans = pq.top();
        return ans;
        
    }
};