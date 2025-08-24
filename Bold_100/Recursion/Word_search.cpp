#include<bits/stdc++.h>
using namespace std;
bool dfs(int i,int j,vector<vector<char>>&board,string word,int k){
    // validation first check
    if(word.size() == k) return true;
    if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j] != word[k]){
        return false;      
    }
    // making visited
    char temp = board[i][j];
    board[i][j] = '$';

    // 4 cals
    // Up call                                  // down call                  // left call                      // Right call
    bool found = dfs(i-1,j,board,word,k+1) || dfs(i+1,j,board,word,k+1) || dfs(i,j-1,board,word,k+1) || dfs(i,j+1,board,word,k+1);
    // Back tracking 
    board[i][j] = '$';
    return found;
}

bool wordExit(vector<vector<char>>&board,string word){
    int m = board.size();
    int n = board[0].size();
    
     // main Traversal 
     for(int i= 0; i<m; i++){
        for(int j = 0; j<n; j++){
             if( dfs(i,j,board,word,0) ){
               return true;
            }
        }
    }
     return false; 
};


int main(){
    vector<vector<char>>board ={
        {'A','B','C','E'},
        {'S','f','C','s'},
        {'A','B','B','E'},
        {'A','D','C','E'},
    };
    
    string word = "ARB";
    bool IsPresent = wordExit(board,word);

    if(IsPresent){
        cout<<"Word is Present"<<endl;
        return 0;
    }else{
        cout<<"Word is not present"<<endl;
        return 0;
    }
    return 0;
}