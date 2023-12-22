class Solution {
public:
    int maxScore(string s) {
        int n = s.length();

        int result = INT_MIN;
        for(int i = 0;  i <=n-2;i++){

              int zero = 0;
              for(int j = 0;j<=i; j++){
                  if(s[j] == '0'){
                      zero++;
                  }
              }

              int one = 0;
              for(int j = i+1; j<n ; j++){
                  if(s[j] == '1'){
                      one++;
                  }
              }
             result = max(result,zero + one);   
            }
        
         return result;
    }
};