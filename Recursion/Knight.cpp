#include<bit/stdc++.h>
using namespace std;

bool solve(vector<vector<int>>&mat,int row,int col,int exp){
 
    int n = mat.size();
    //base case
     if(row < 0 || col < 0 || row>= n || col>= n || mat[row][col] != exp){
       return false;
     }

     if(exp == n * n-1){
          return true; 
     }
     
   // Knight's 8 possible moves
    bool ans1 = solve(mat, row - 2, col - 1, exp + 1);
    bool ans2 = solve(mat, row - 2, col + 1, exp + 1);
    bool ans3 = solve(mat, row - 1, col - 2, exp + 1);
    bool ans4 = solve(mat, row - 1, col + 2, exp + 1);
    bool ans5 = solve(mat, row + 1, col - 2, exp + 1);
    bool ans6 = solve(mat, row + 1, col + 2, exp + 1);
    bool ans7 = solve(mat, row + 2, col - 1, exp + 1);
    bool ans8 = solve(mat, row + 2, col + 1, exp + 1);
    
    return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
 
}

solveKnight(vector<vector<int>>&mat){
     
    int row = 0;
    int col = 0;
    int exp = 0;
    int n = mat.size();

   return solve(mat,row,col,exp);
}

int main(){
      vector<vector<int>>mat = {{0, 59, 38, 33, 30, 17, 8, 63},
                             {37, 34, 31, 60, 9, 62, 29, 16},
                             {58, 1, 36, 39, 32, 27, 18, 7},
                             {35, 48, 41, 26, 61, 10, 15,28},
                             {42,57 ,2 ,49 ,40 ,23 ,6 ,19},
                             {47 ,50 ,45 ,54 ,25 ,20 ,11 ,14},
                             {56 ,43 ,52 ,3 ,22 ,13 ,24 ,5},
                             {51 ,46 ,55 ,44 ,53 ,4 ,21 ,12}};

    cout<<solveKnight(mat)<<endl;

    return 0;
}
