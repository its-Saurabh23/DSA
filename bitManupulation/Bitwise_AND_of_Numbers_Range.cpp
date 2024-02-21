// integer overflow

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
      if(left == 0 || right ==0 ) return 0;
      
      int ans = left;

      for(int i = left+1; i<=right; i++){
        ans &=i;

          if(ans == 0)break;
      }  
     
     return ans;
    }
};


// correct one
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
      if(left == 0 || right ==0 ) return 0;

      int ans = 0;

      
     while(left<right)
     {
         left >>=1;
         right>>=1;
         ans++;
     }
     return left << ans;
    }
};

first loop:
            101 >> 1 = 10
            111 >> 1 = 11
            cnt = 1

Second loop:
            10 >> 1 = 1
            11 >> 1 = 1
            cnt = 2

Third loop:
            1 == 1 
So now since they are equal we will add those many 0's at the 
end of the current element we have by using left shift operator.

            1 << cnt  = 1 << 2  => 100(4) 


    Result = 4
