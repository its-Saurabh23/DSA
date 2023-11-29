class Solution{
    public:
bool isPossible(int newx,int newy,vector<vector<bool>>&vist,vector<vector<int>>&arr,int n)
{
if((newx>=0 && newx<n) && (newy>=0 && newy<n) && vist[newx][newy] != 1 && arr[newx][newy] == 1){
        return true;
    }
    else{
        false;
    }
}
void solve(int x,int y,vector<vector<int>>&arr,int n, 
vector<string>&ans,vector<vector<bool>>&vist,string path){
        // base case
        if(x == n-1 && y == n-1){
            ans.push_back(path);
            return;
        }
        // 4 movement possible
        
        
          vist[x][y] = 1;
        // D x+1 y would be same
        if(isPossible(x+1,y,vist,arr,n)){
            
            solve(x+1,y,arr,n,ans,vist,path + 'D');
           
        }
        // L x will be same y-1
         if(isPossible(x,y-1,vist,arr,n)){
         
            solve(x,y-1,arr,n,ans,vist,path + 'L');
           
        }
        // R x will be same y+1
         if(isPossible(x,y+1,vist,arr,n)){
            
             solve(x,y+1,arr,n,ans,vist,path + 'R');
             
        }
        // U x-1 y will be same
         if(isPossible(x-1,y,vist,arr,n)){
            
          solve(x-1,y,arr,n,ans,vist,path + 'U');
            
        }
        vist[x][y] = 0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        
        vector<string>ans;
        if(m[0][0] == 0){
            return ans;
        }
        string path = "";
        vector<vector<bool>> visted(n,vector<bool>(n,0));
        
        solve(0,0,m,n,ans,visted,path);
        return ans;
    }
};


// T.C   4 raise to the power(m*n)
// S.C   o(n*m)