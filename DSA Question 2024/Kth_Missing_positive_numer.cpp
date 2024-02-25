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
