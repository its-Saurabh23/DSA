// USe school Method to find the Increasing order int the string and make it monotomnic stack

class Solution {
public:
    string removeKdigits(string nums, int k) {
        int n  = nums.length();
         
        string ans ="";
        
        for(int i =0; i<n; i++){
           
            while(ans.length() >0 && ans.back() > nums[i] && k>0){
                ans.pop_back();
                k--;
            }
            if(ans.length() > 0 || nums[i] != '0'){
                ans.push_back(nums[i]); // Preceding zeros
            }
            
        }
        
        while(ans.length() > 0 && k>0){
            ans.pop_back();
            k--;
        }
        
        if(ans == ""){
            return "0";
        }
        return ans;
    }
};