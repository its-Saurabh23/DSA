
bool isSafe(int x,int y,int n,vector<vector<int>>visted, vector<vector<int>>&m){
        
        if((x>=0 && x<n) &&(y>=0 && y<n )&& visted[x][y] == 0 && m[x][y] == 1){
            return true;
        }
        else{
            return false;
        }
        
    }
    void solve(vector<vector<int>>&m ,int n,vector<string>&ans,int x,
                int y, vector<vector<int>> visted, string path ){
                    
                    // x,y,
                    // base case..
                    if(x == n-1 && y == n-1){
                        ans.push_back(path);
                        return;
                    }
                    visted[x][y] = 1;
                    
                    // there are 4 choice
                    
                    // down
                    int newx = x+1;
                    int newy = y;
                    if(isSafe(newx,newy,n,visted,m)){
                       path.push_back('D');
                       solve(m,n,ans,newx,newy,visted,path);
                       path.pop_back();
                    }
                    
                     // Left
                    newx = x;
                    newy = y-1;
                    if(isSafe(newx,newy,n,visted,m)){
                       path.push_back('L');
                       solve(m,n,ans,newx,newy,visted,path);
                       path.pop_back();
                    }
                    
                    // Right
                    newx = x;
                    newy = y+1;
                    if(isSafe(newx,newy,n,visted,m)){
                       path.push_back('R');
                       solve(m,n,ans,newx,newy,visted,path);
                       path.pop_back();
                    }
                    
                     // up
                    newx = x-1;
                    newy = y;
                    if(isSafe(newx,newy,n,visted,m)){
                       path.push_back('U');
                       solve(m,n,ans,newx,newy,visted,path);
                       path.pop_back();
                    }
                    
                    visted[x][y]=0;
                }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        
        vector<string>ans;
        
        if(m[0][0] ==0){
            return ans;
        }
        int srcx= 0;
        int srcy =0;
        
        vector<vector<int>>visted = m;
        // initialise width 0
        for(int i =0; i<n; i++){
            for(int j =0; j<n; j++){
                visted[i][j] = 0;
                
            }
        }
        
         string path ="";
         solve(m,n,ans,srcx,srcy,visted,path);
         
         sort(ans.begin(),ans.end());
         return ans;
    }




-----------------------------------------------------------------------------------------
        #include<bits/stdc++.h>
using namespace std;

class  Solution {

   public:
   bool isSafe(vector<vector<int>>&m,int n,int x,int y,vector<vector<int>>&vis){

    if( x<0 || x >= n || y<0 || y>=n || m[x][y] == 0 || vis[x][y] == 1){
        return false;
     }
     
    return true;
   }

   void helper(vector<vector<int>>&m,int n,vector<string>&ans,string path,vector<vector<int>>vis,int x,int y){
       
    // Base case
    if(x == n-1 && y == n-1){
        ans.push_back(path);
        return;
    }
    vis[x][y] = 1;
    // Recusive call 
    int newx;
    int newy;

     newx = x+1;
     newy = y;
       
    // Down
    if(isSafe(m,n,newx,newy,vis)){
        //pic 
         path +="D";
        //exploar
         helper(m,n,ans,path,vis,newx,newy);
        // undo
        path.pop_back();
    }

     newx = x-1;
     newy = y;
    // Up
    if(isSafe(m,n,newx,newy,vis)){
         path += "U";
         helper(m,n,ans,path,vis,newx,newy);
         path.pop_back();
    }

     newx = x;
     newy = y-1; 
    // Left 
     if(isSafe(m,n,newx,newy,vis)){
        path += "L";
        helper(m,n,ans,path,vis,newx,newy);
        path.pop_back();
     }

      newx = x;
      newy = y+1;
    // Right
    if(isSafe(m,n,newx,newy,vis)){
         path +="R";
         helper(m,n,ans,path,vis,newx,newy);
         path.pop_back();
    }

    vis[x][y] = 0;
   }

   vector<string>solve(vector<vector<int>>&m){
       vector<string>ans;

    if(m[0][0] == 0){
           return ans;
       }

    int n = m.size();
    vector<vector<int>>vis(n,vector<int>(n,0));
    int srcx = 0;
    int srcy = 0; 
    string path = "";

    helper(m,n,ans,path,vis,srcx,srcy);
    return ans;
    }   
};


 int main() {

    vector<vector<int>> m = {
        {1, 1, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 1, 1},
        {0, 1, 1, 1}
    };

    Solution obj;
    vector<string> ans = obj.solve(m);

    for (string str : ans) {
        cout << str << " ";
    }

    return 0;
}
