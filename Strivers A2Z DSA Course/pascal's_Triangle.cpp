// Formula based apporach
// ans *(row-col) /col

lass Solution {
public:
    vector<int>generateRow(int row){
        long long ans = 1;
        vector<int>RowAns;
        //add the first elemtn in the ans
        RowAns.push_back(1);
        //loic_part
        for(int col = 1;col<row;col++){
            ans = ans*(row-col);
            ans = ans/(col);
            RowAns.push_back(ans);
        }
        return RowAns;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i = 1; i<=numRows;i++){
          ans.push_back(generateRow(i));          
        }
        return ans;
    }
};