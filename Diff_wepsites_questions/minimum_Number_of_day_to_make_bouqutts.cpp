class Solution {
public:
    bool isPossible(vector<int>&arr,int boq,int flower, long long m){
        int adj = 0, bc = 0;

        for(int i = 0; i<arr.size(); i++){
           
           if(arr[i]<= m){
               adj++;
               if(adj == flower){
                   bc++;
                   if(bc == boq){
                       return true;
                   }
                   else{
                       adj= 0;
                   }
               }
           }
           else{
               adj = 0;
           }
        }
        return false;
    }
    int minDays(vector<int>& arr, int boq, int flower) {
        
        //  edge case

        if((long long )boq*flower > arr.size()){
            return -1;
        }

         long long low = 1;
         long long high = *max_element(arr.begin(),arr.end());
        
         long long res = high;
        // appy binary search 
        while(low<=high){
         long long  mid = low + (high-low)/2;

        if(isPossible(arr,boq,flower,mid) == true){
            res = min(res,mid);
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
        }
        return res;
    }
};