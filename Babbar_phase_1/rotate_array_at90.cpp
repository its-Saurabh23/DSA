#include<bits/stdc++.h>
using namespace std;
int  RotateArray_90(vector<vector<int>>& matrix)
{
    vector<int>ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int count = 0;
    int  total = row*col;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row -1;
    int endingCol  = col-1;
   while(true)
   {
    // Printing ending row
    for(int index = endingRow;   index>= startingRow; index --)
{
     ans.push_back(matrix[index][startingCol]);
 
}
    // Printing firstCol
    for(int index =startingCol;  index<=endingCol; index++)
  {
   ans.push_back(matrix[startingRow][index]);
 
  }
    // Printing endCol
    for(int index =startingRow;  index<= endingRow; index++)
{
  ans.push_back(matrix[index][endingCol]);
 
}
    //  PrintStartCol
   for(int index =endingCol;index >=startingCol; index-- )
{
    ans.push_back(matrix[endingRow][index]);
 
}

   }
   for (int row = 0;  row<total; row++)
    {
        for (int col = 0; col < total; col++)
        {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}
int main(){
vector<vector<int>> matrix
{
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
RotateArray_90(matrix);
    return 0;
}
// KAl again solve karna hai.............