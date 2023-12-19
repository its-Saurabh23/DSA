class Solution {
public:
    vector<vector<int>>directions{
      {-1,-1},{-1,0},{-1,1},
      {0,-1},{0,0},{0,1},
      {1,-1},{1,0},{1,1}
    };
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
      int m = img.size();
      int n =img[0].size();
    
    // take an empty vector of same size();
    vector<vector<int>>ans(m,vector<int>(n,0)); 

      for(int i=0;i<m;i++){
          for(int j= 0;j<n;j++){
             
            //  main 
            int sum = 0;
            int count = 0;  // beacuse divide karna hai 

           for(auto &it: directions){
               int i_ = i + it[0];
               int j_ = j + it[1];
             
              if(i_>=0 && i_<m && j_>=0 && j_<n){
                sum += img[i_][j_];
                count++;
              }
            }
            // now store the result;
           ans[i][j] = sum / count; 
          }

        }  
        return ans;
    }
};

//  main logic hai broute force naughbour cell nikalo or uski frequency se divide kar do.