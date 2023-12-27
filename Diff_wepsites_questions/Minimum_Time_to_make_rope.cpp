class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
       int i = 0,j = 0;
       int n = colors.size();
       int totalTime = 0; 
      while(i<n && j<n) {
        int maxiTime = 0 ,currentTime = 0 ;
        while(j<n && colors[i] == colors[j]){

          maxiTime = max(maxiTime,neededTime[j]);
          currentTime += neededTime[j];
          j++;
        }
        i = j;
        totalTime += (currentTime - maxiTime);
      }  
      return totalTime;
    }
};

// S.C  O(1);
// T.C O(n);