class Solution {
public:

bool isSafe(int row,int col,char digit,vector<vector<char>>&mat){

     // check row 
      for(int i = 0; i<9;i++){
        if(mat[row][i] == digit){
            return false;
        }
      }
      // check colums
      for(int j =0; j<9; j++){
        if(mat[j][col] == digit){
            return false;
        }
      }
       
      // traverse 3*3 matrix
      int startRow = (row/3)*3;
      int startCol = (col/3)*3;

      for(int i = startRow; i<startRow+3; i++){
        for(int j = startCol; j<startCol+3; j++){
            if(mat[i][j] == digit){
                return false;
            }
        }
      }
      return true;
}

bool solve(int row,int col,vector<vector<char>>&mat){

    // base case 
    if(row == 9){
        return true;
    }
     
    if(col == 9){
     return solve(row+1,0,mat);
    }
 
    // Allready field;
    if(mat[row][col] != '.'){
       return solve(row,col+1,mat);
    }

    for(char digit = '1'; digit<='9'; digit++){

        if(isSafe(row,col,digit,mat)){
            //choose
            mat[row][col] = digit;

            // exploar other possibilites
           if(solve(row,col+1,mat)){
            return true;
           }
           // backtracking // undo
           mat[row][col] = '.';
        }

    }
    return  false;
}

    void solveSudoku(vector<vector<char>>& board) {
        solve(0,0,board);
    }
};



-----------------------------------------------------------------------------------------------------------------
     #include<bits/stdc++.h>
using  namespace std;


class Solution{
    public:

  

  bool isSafe(vector<vector<char>>&mat,int row,int col,char digit){
    // row,
    for(int i = 0;i<9;i++){
          if(mat[row][i] == digit)return false;
    }
    //col 
    for(int j =0;j<9; j++){
        if(mat[j][col] == digit)return false;
    }
    // 3*3 mt

    int newRow = (row/3)*3;
    int newCol = (col/3)*3;

    for(int i = newRow; i<newRow+3; i++){
        for(int j= newCol; j<newCol+3; j++){
            if(mat[i][j] == digit) {
                return false;
            }
        }
    }
    return true;
  }


bool solve(vector<vector<char>>&mat,int row,int col){
    
    //Base case
    if(row == 9){
        return true;
    }
    if(col == 9){
        return solve(mat,row+1,col);
    }
    if(mat[row][col] != '.'){
        return solve(mat,row,col+1);
    }

    for(char digit = '1'; digit<='9'; i++){
         if(isSafe(mat,row,col,digit)){
            //pic
             mat[row][col] = digit;
             // exploar
             if(solve(mat,row,col+1)){
                return true;
            };
             // backtrack
             mat[row][col] = '.';
         }
    }
}
}

int main(){
  vector<vector<char>>mat;
  if(sove(mat,0,0)){
  std::<<true;
  }else{
    std::false;
  }

   return 0;
}
