// Two popinter apporach

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n = words.size();

        for(int i = 0 ;i<n; i++){
            int left = 0;
            int right = words[i].length()-1;
            bool flage = true;

         while(left<right){
            if(words[i][left] != words[i][right]){
                flage = false;
            }
            left++;
            right--;
        }
          if(flage){
            return words[i];
          }
        
        }
        return "";
    }
};


// same way
 bool plaindrome(string &str){
        int left = 0; 
        int right = str.size()-1;

        while(left<right){
            if(str[left] != str[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        
        for(auto str:words){
            if(plaindrome(str)){
                return str;
            }
        }
        return "";
    }