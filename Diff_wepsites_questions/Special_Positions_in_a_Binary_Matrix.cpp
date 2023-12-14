class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int result = 0;
        for(int i = 0; i< m; i++){
            for(int j = 0; j<n; j++){
                if(mat[i][j] == 0)continue;

                // check colum

               bool special = true;
               for(int r = 0; r<m;r++){
                if(r != i && mat[r][j] == 1)
                {
                    special = false;
                    break;
                }
               } 

               // for row 
               for(int  c = 0; c<n;c++){
                   if(c != j && mat[i][c] == 1){
                       special = false;
                       break;
                   }
               }
               if(special == true){
                   result++;
               }
            }
        }
        return result;
    }
};


//  brute force Apporach 


// Better apporach 
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size(); // no. of rows 
        int n = mat[0].size();// no of colum
        
        vector<int> rowCount(m,0);  // how many ones int the rows 
        vector<int> colCount(n,0);  // how many ones in clo 

        for(int i =0;i<m;i++){
            for(int j =0;j<n; j++){
              
              if(mat[i][j] == 1) {
                  rowCount[i]++;
                  colCount[j]++;
              }
            }
        }

        int result = 0;

        for(int i = 0; i<m;i++){
            for(int j = 0; j<n; j++){
                if(mat[i][j] == 0 )continue;

                if(rowCount[i] == 1 && colCount[j] == 1){
                    result++;
                }
            }
        }
        return result;
    }
};

// T.c is reduce but the spce is increased 

