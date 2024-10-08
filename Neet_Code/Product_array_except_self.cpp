class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {       
        int n = nums.size();
        int prefix = 1;
        vector<int>ans(n,1);

//left to right Traversal  
        for(int i =0; i<n;i++){
        ans[i] = prefix;
        prefix = prefix*nums[i];
        }

// right to left taversal 
       int postfix = 1;
        for(int i = n-1;i>= 0; i--){
         ans[i] = ans[i]* postfix;
         postfix = postfix * nums[i];
        }
        return ans;
    }
};

// by division method
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    
    int count_of_zero = 0;
    int product_without_zero = 1;
    for(int &i: nums){
        if(i == 0){
            count_of_zero++;
        }
        else{
            product_without_zero *= i;
        }
    }

    vector<int>ans(n);
    for(int i = 0;i<n; i++){
        int num = nums[i];
        if(num != 0){
            if(count_of_zero >0){
                ans[i] = 0;
            }else{
                ans[i] = product_without_zero / nums[i];
            }
        }else{
            // num == 0
            if(count_of_zero >1){
                ans[i] = 0;
            }
            else{
                ans[i] = product_without_zero;
            }
        }
    }
    return ans;
    }
};



// Usig extra space 
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> right(n);
    vector<int> left(n);
    
    left[0] = 1;
    right[n-1] = 1;

//   left
    for(int i = 1;i<n; i++){
       left[i] = nums[i-1] * left[i-1];
    }

// Right
    for(int i = n-2; i>=0; i--){
       right[i] = nums[i+1] * right[i+1];
    }
 
 vector<int>ans(n);

 for(int i = 0; i<n ;i++){
    ans[i] = left[i]*right[i];
 }
   return ans;
 }
};


// const space and time solution
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();

//  cosnider it is a left product vector  
    vector<int>ans(n);
    ans[0] = 1;

    for(int i = 1; i<n; i++){
      ans[i] = ans[i-1] * nums[i-1];
    }

    // right
    int right_product = 1;
   
    for(int i = n-1; i>=0; i--){
        ans[i] =  ans[i] * right_product;
        right_product *= nums[i];
    }
    return ans;
 }
};


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
    
        int n = nums.size();
        vector<int> left(n,1);
        vector<int> right(n,1);
        vector<int> ans(n);

        for (int i = 1; i < n; i++)   
        {
            left[i] = nums[i-1] * left[i-1];    
        }
       
        for (int i = n - 2; i >=0; i--)
        {
            right[i] = right[i+1] * nums[i+1];  
        }

        for (int i = 0; i < n; i++)
        {
            ans[i] = left[i] * right[i];
        }
        return ans;
    }
};

int main()
{

    vector<int> nums = {1, 2, 3, 4};
    Solution obj;
    vector<int>ans;

    ans = obj.productExceptSelf(nums);
    // print
    for(int i = 0;i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
 