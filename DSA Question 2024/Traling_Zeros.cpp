class Solution
{
public:
    int trailingZeroes(int N)
    {
        // Write Your Code her
        int cnt = 0;
        
        while(N>=5){
        cnt +=  N/5;
         N/= 5;
        }
        return cnt;
    }
};