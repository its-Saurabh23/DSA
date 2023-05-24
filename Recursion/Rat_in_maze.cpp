/*
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
*/