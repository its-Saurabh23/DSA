class Solution {
public:
    int numberOfBeams(vector<string>& bank) {

    int prevDevice = 0;
    int n = bank.size();
    int ans = 0;

    for(int i= 0; i<n; i++){
      int currDev = 0;
      for(char &ch:bank[i]){
          if(ch == '1'){
              currDev++;
          }
      }
      ans += (currDev * prevDevice);

      if(currDev != 0){
         prevDevice = currDev; 
      }
    }  
    return ans; 
    }
};

// T.C. = M*N;
// S.C = O(1);