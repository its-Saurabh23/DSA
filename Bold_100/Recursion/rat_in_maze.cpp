#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>>&board,vector<vector<bool>>&visited,int row,int col){
     int n = board.size();
    return(row>=0 && row<n && col>=0 && col<n && !visited[row][col] && board[row][col] == 1);
}

void solve(vector<vector<int>>&board,vector<vector<bool>>& visited,int row,int col,vector<string>&ans,string path){
    
    int n =board.size();

    // Base Case
    if(row == n-1 && col == n-1){
        ans.push_back(path);
        return;
    }

    // mark visited 
    visited[row][col] = true;

    // Up call
    if( isSafe(board,visited,row-1,col)){
     solve(board,visited,row-1,col,ans,path+"U");
    }
    // Down call
    if(isSafe(board,visited,row+1,col)){
     solve(board,visited,row+1,col,ans,path+"D");
    }
    // Left call
    if(isSafe(board,visited,row,col-1)){
     solve(board,visited,row,col-1,ans,path+"L");
    }
    //  Right call
    if( isSafe(board,visited,row,col + 1)){
     solve(board,visited,row, col + 1,ans,path+"R");
    }

    visited[row][col] = false;
}



int main(){
    vector<vector<int>>board ={
        {1,0,0,0},
        {1,1,0,0},
        {1,1,0,1},
        {0,1,1,1}
    };
    
    // vector<vector<bool>>visited={
        //     {0,0,0,0},
        //     {0,0,0,0},
        //     {0,0,0,0},
        //     {0,0,0,0}
        // };
        
    int n = board.size();
    
    // vector<vector<bool>>visited(n,false);
    vector<vector<bool>>visited(n,vector<bool>(n,false));

    vector<string>ans;
    string path ="";
    
    if(board[0][0] == 1){
        solve(board,visited,0,0,ans,path);
    }

    for(auto it:ans){
        cout<<it <<" ";
    }
    return 0;
}