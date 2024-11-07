class Solution {
public:
    bool isPerfectSquare(int num) {
       int result = num;
        
        if(num == 1)return true;
        
        for(int i = 1; i<=num/2; i++){
            
              if(static_cast<long long> (i)*i == result){
                  return true;
              }
        }
        return false;
    }
};