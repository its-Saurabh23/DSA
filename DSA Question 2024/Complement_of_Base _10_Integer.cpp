class Solution {
public:
    int bitwiseComplement(int n) {

        if(n == 0)return 1;
        
        int ans = 0,rem ,mul = 1;

        while(n){
            rem = n%2;
            // compliment the ans 
            rem = rem ^1;
            n /= 2;
            ans = ans + rem *mul;
            mul = mul *2;
        }
        return ans;
    }
};