// Greedy appoarch is not working in the question 

// plaese dry run this program 

class Solution {
public:
    int minOperations(string s) {
        
        int start_w_0 = 0;  // 010101010
        int start_w_1 = 0;  // 101010101

        for(int i = 0; i<s.length(); i++){

            if(i%2 == 0){
                if(s[i]== '0'){
                start_w_1++;
                }
                else{
                    start_w_0++;
                }
            }
            else{
                if(s[i] == '1'){
                    start_w_1++;
                }
                else{
                    start_w_0++;
                }
            }
        }
        return min(start_w_1,start_w_0 );
    }
};