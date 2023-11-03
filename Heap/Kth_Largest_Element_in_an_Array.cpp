

// for Kth max element use min heap and kth smallest elemtn use  max heap;
/*
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
     priority_queue<int,vector<int>,greater<int>>pq;
       
       int n = nums.size();
       // push all elemnt in max Heap;
       for(int i = 0;i<n; i++){
           pq.push(nums[i]);
       } 
       int l = pq.size();
    

       for(int i = k;  i <=l; i++){
           if(pq.size() >k){
            pq.pop();
           }
       }
       return pq.top();

    }
};

*/