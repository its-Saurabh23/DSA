//logic 
//  [row] [coloumn]
// Printing     Right--> bottom -->left-->top
// Try to dry run a single row matrix . foredge case

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        //col m row n;
        int m = matrix[0].size();
        int left = 0, right = m-1;
        int top = 0, bottom = n-1;
        
        vector<int>ans;
        while(top <= bottom && left <= right){
            //right

             for(int i = left;i<=right; i++){
              ans.push_back(matrix[top][i]);
             }
             top++;
            
            // bottom
            for(int i = top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;

            // left
            
            if(top<=bottom){
            for(int i = right; i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            
            //top
            if(left<=right){
            for(int i = bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            } 
             left++;
            }
            
        }
        return ans;