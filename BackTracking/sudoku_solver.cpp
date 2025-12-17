class Solution {
public:

bool isSafe(int row,int col, vector<vector<char>>&board,char val){
      
  for(int i = 0; i<board.size();i++){

    // row 
     if(board[row][i] == val){
         return false;
     }
    // col
     if(board[i][col] == val){
         return false;
     }
    if(board[3*(row/3) + (i/3)] [3*(col/3) + (i%3)] == val){
     return false;
 }

  }
  return true;

    }

 bool solve(vector<vector<char>> &board){
    int n = board.size();
    // step 1 find empty cell (Traveerse matrix)

    for(int i = 0; i<n; i++){
        for(int j = 0;j<n; j++){
         if(board[i][j] == '.'){
            //  step 2 set the vales (1-9)
            for(char val = '1'; val<='9';val++){
                if(isSafe(i,j,board,val)){
                    board[i][j]= val;
                    //  recusion for rest of the thing
                    bool nextAns = solve(board);
                    if(nextAns){
                        return true;
                    }else{
                        // backtrack
                        board[i][j] ='.';
                    }
                }
            }
        return false;
         }
      } 
    }
    return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        
        solve(board);
    }
};
