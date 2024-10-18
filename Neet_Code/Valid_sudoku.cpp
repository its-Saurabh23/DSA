class Solution {
public:
    
   bool isValid (int row,int col,vector<vector<char>>& board,char val){
       int n = board.size();  
       
       int cnt = 0;
       for(int i = 0;i<n; i++){
           if(board[row][i] == val){
               cnt++;
           }
           if(board[i][col] == val){
               cnt++;
           }
           if(board[3*(row/3) + i/3][3*(col/3)+(i%3)] == val){
               cnt++;
           }
       }
       if(cnt>3)return false;
       return true;
   }  
    
bool solve(vector<vector<char>>& board){
    int n = board.size();
    
    for(int i = 0; i<n; i++){
        for(int j = 0;j<n; j++){
            
            if(board[i][j] != '.'){
                char val = board[i][j];
                
                if(isValid(i,j,board,val)){
                    
                }else{
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