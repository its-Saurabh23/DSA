class Solution {
public:
    bool isSafe(vector<string>board,int row,int col){

      // Same row - check left
       for(int i = 0; i<col; i++){
          if(board[row][i] == 'Q')return false;
       }

       for(int i = 0;i<row; i++){
        if(board[i][col] == 'Q')return false;
       }
       
       // digonal check right side
       for(int i = row-1, j = col+1; i>=0 && j<board.size(); i--, j++){
            if(board[i][j] == 'Q') return false;
       }

       // left side diagonal check
        for(int i = row-1, j=col-1; i>=0 && j>=0; i--,j--){
            if(board[i][j] == 'Q')return false;
        }
        return true;
   }

    void solve(vector<string>board,vector<vector<string>>& ans, int row){
       
        for(int i = 0; i<board.size(); i++){
            if(isSafe(board,row,i)){
                // place queen
                board[row][i] = 'Q';
                if(row == board.size() - 1){
                    ans.push_back(board);
                }else{
                    solve(board,ans,row+1);
                }
                // backTracking
                board[row][i]  ='.';
            }
        }
    }   

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        vector<vector<string>> ans;
        solve(board,ans, 0);

        return ans;
    }
};



--------------------------------------------Practice--------------------------------------------------------------------------
    #include<bits/stdc++.h>
using namespace std;

class Solution{
   public:

   //valid configuration means all 8 possible paths cover  
   // No backtracking because 

   bool solve(vector<vector<int>>&mat,int x,int y,int expValue){
          
    int n = mat.size();
    //Base case
     if( x<0 || x>= n || y<0|| y>= n || mat[x][y] != expValue){
            return false;
     }

     if(expValue == n*n-1){
        return true;
     }

    // recursive function call
    bool ans1 = solve(mat,x-2,y+1,expValue+1);
    bool ans2 = solve(mat,x, y+2, expValue+1);

    bool ans3 = solve(mat,x+1,y+2,expValue+1);
    bool ans4 = solve(mat,x+2,y+1,expValue+1);

    bool ans5 = solve(mat,x+2,y-1,expValue+1);
    bool ans6 = solve(mat,x-1,y-2,expValue+1);

    bool ans7 = solve(mat,x+1,y-2,expValue+1);
    bool ans8 = solve(mat,x-2,y-1,expValue+1);

    return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
     
   }

   bool solveKight(vector<vector<int>>&mat){
        int x = 0;
        int y = 0;
        int expValue = 0;
        return solve(mat,x,y,expValue);
   }


   bool isSafe(vector<string>&mat,int row,int col){
     // check row wise
     for(int i = 0; i<col; i++){
          if(mat[row][i] =='Q'){
            return  false;
          }
     }
     // check column wise
     if(int j = 0; j<row; j++){
        if(mat[j][col] =='Q'){
            return false;
        }
     }
     // check digonal right
     for(int i = row-1,j = col+1; i>=0 && j<mat.size(); i--j++){
        if(mar[i][j] == 'Q'){
            return false;
        }
     }  

     // lcheck left dignoal
    for(int i = row-1,j<col-1; i>=0 && j>=0; i--,j--){
         if(mat[i][j]== 'Q'){
            return false;
         }
    }

    return false;
   }

   // Remember that we are placing the Queen in row wise we need to check the row wise 
  void Qsolve(vector<string>mat,vector<string>&ans,row){
     
    for(int i = 0; i<mar.size();  i++){
        if(isSafe(mat,row,i)){
            // pick 
               mat[row][i] = 'Q';
               if(row == mat.size()-1){
                 ans.push_back(mat);
               }else{
                   // exploarint
                Qsolve(mat,ans,row+1);
               }
               // undo 
                mat[row][i] =='.';
        }
    }
   }

   vector<string>nQueen(int n){
     
     vector<string>mat(string(n,'.'));
     vector<vector<string>>ans;
     int  n = mat.size();
     Qsolve(mat,ans,0);

     return ans;
   }

};

int main(){


    vector<vector<int>>mat = {
                             {0, 59, 38, 33, 30, 17, 8, 63},
                             {37, 34, 31, 60, 9, 62, 29, 16},
                             {58, 1, 36, 39, 32, 27, 18, 7},
                             {35, 48, 41, 26, 61, 10, 15,28},
                             {42,57 ,2 ,49 ,40 ,23 ,6 ,19},
                             {47 ,50 ,45 ,54 ,25 ,20 ,11 ,14},
                             {56 ,43 ,52 ,3 ,22 ,13 ,24 ,5},
                             {51 ,46 ,55 ,44 ,53 ,4 ,21 ,12}
                            };

        if(solveKight(mat)){
            std::cout<<"valid configuration"<<endl;
        }else {
            std::cout<<"not found valid configuration"<<endl;
        }                    
    return 0;
}
