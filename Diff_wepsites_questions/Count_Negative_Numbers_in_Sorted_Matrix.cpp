// better soltion
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        int cnt = 0;
        for(auto & row: grid){
            int idx = upper_bound(begin(row),end(row),0,greater())-begin(row);
            cnt += (n-idx); 
        }
         return cnt;
    }
   
};


// optimal apporach 
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        int row = m-1;
        int col  = 0;
        int result = 0;
        while(row >=0 && col < n){
     
        if(grid[row][col] >= 0){
            col++;
        }
        else{
            result += (n-col);
            row--;
        }
        }
        return result;
    }
};