// T.C - O(n) solution
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int  nums = 1, n = arr.size(), i=0;

        while(i<n && k>0){

            if(arr[i] == nums){
                i++;
            }else{
                k--;
            }
            nums++;
        }
        while(k--){
            nums++;
        }
        return nums-1;
    }
};

//  T.C = log n

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int l = 0,r = n-1;
        int mid = -1;

        while(l<=r){
            mid = l+(r-l)/2;

        int missing  = arr[mid] - (mid + 1);
        
        if( missing < k){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
        return l + k;

    }
}; 