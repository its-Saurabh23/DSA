
// T.C = O(n*n) because of two loops
// S.C O(1)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                ans = max(ans, (nums[i] - 1) * (nums[j] - 1));
            }
        } 
        return ans;  
    }
};


// T.C = o( n long n)
// because of sorting 
// S.C O(1)  if we are not calculating the sorting space 
 
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

// T.C O(n) because of single itration.
// S.C O(1)

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest  = 0;
        int secondLargest = 0;

        for(int i: nums){
            if(i>largest){
                
               secondLargest = largest ;
                largest = i;
            }
            else{
              secondLargest = max(secondLargest , i);
            }
        }
        return (largest-1)*(secondLargest-1);
    }
};