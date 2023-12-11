class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
     int n = arr.size();
     int quad = n/4;
    for(int i = 0; i<n-quad; i++){
        if(arr[i] == arr[i+quad]){
          return arr[i];
        }
    } 
    return -1;
    }
};