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
