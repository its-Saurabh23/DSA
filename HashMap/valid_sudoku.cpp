class Solution {
public:

bool isSafe(int row,int col, vector<vector<char>>&board,char val){  
    int count = 0;
  for(int i = 0; i<board.size();i++){
    //   row 
    if(board[row][i] == val){
        count++;
     }
    //  col
    if(board[i][col] == val){
          count++;
     }
    if(board[3*(row/3) + (i/3)] [3*(col/3) + (i%3)] == val){
      count++;
    }

  }
  if( count>3)return false;

  return true;
 }

 bool solve(vector<vector<char>>&board){
        int n = board.size();
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n;j++){
                
                if(board[i][j] !='.'){
                    char val = board[i][j];
                    if(isSafe(i,j,board,val)){
                        // cout<<"safe"<<endl;
                    }
                    else{
                        return false;
                    }
                }
          }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        
        bool ans = solve(board);
        if(ans){
            return true;
        }
        
        return false;
    }
};