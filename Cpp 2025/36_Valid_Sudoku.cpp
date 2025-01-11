class Solution {
public:

    bool Traversal(vector<vector<char>> &board,int si,int ei){

        unordered_set<char>st;
        for(int i= si; i<si+3; i++){
            for(int j = ei; j<ei+3; j++){
               if(board[i][j] == '.')continue;

               if(st.find(board[i][j]) != st.end()){
                return false;
               }
               st.insert(board[i][j]);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {

       for(int i = 0; i<9; i++){
         unordered_set<char>st;
         for(int j =0;j<9; j++){
            if(board[i][j] == '.') continue;

            if(st.find(board[i][j]) != st.end()){
                return false;
            }
            st.insert(board[i][j]);
         }
       }

       for(int col = 0; col<9; col++){
            unordered_set<char>st;
          for(int row = 0; row<9; row++){
            if(board[row][col] == '.')continue;

            if(st.find(board[row][col]) != st.end() ){
                return false;
            }
            st.insert(board[row][col]);
          }
       }
      
      for(int si = 0; si<9; si= si+3){
          for(int ei = 0; ei<9; ei=ei+3){

            if(!Traversal(board,si,ei)){
                return false;
            }
          }
      }
      return true;
    }
};