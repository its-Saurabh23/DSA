class Solution {
public:
    int mySqrt(int x) {
        
        int ans = 0 ,odd = 1;
        while(x>= odd){
            // reduce the original number
            x-= odd;
            ++ans;
            odd += 2;
        }
        return ans;
    }
};