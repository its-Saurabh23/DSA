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