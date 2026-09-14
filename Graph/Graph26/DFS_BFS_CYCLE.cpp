#include<bits/stdc++.h>
using namespace std;


class Graph{
    
    void BFS(int start,vector<vector<int>>&graph){  // print out
        
        queue<int>q;
        q.push();
        vector<bool>vis(n,false);
        vis[start] = true;
        
        while(!q.empty()){
           int temp = q.front();
           q.pop();
           std::cout<<temp<<" ";
           for(int neighbour:graph[temp]){   
            if(!vis[neighbour]){
                vis[neighbour] = true;
                q.push(neighbour);
            }
           }
        }
    }

    void DFS(int start,vector<vector<int>>&graph,vector<bool>&vis){
         
        vis[start] = true;
        std::cout<<start;

        for(int neighbour:vis[start]){
            
            if(!vis[neighbour]){
                DFS(neighbour,graph,vis);
            }
        }
    }
    
    void  dfs(vector<vector<int>>&grid,int r,int c){

        int row = grid.size();
        int col = grid[0].size();
        
        // Base case
        if(r<0 ||r>=row || c<0 ||c>=col || grid[r][c] == "0"){
            return;
        }
        grid[r][c] == "0";
        
        dfs(grid,r-1,c); // up call
        dfs(grid,r+1,c);  // down call
        dfs(grid,r,c-1); // left call 
        dfs(grid,r,c+1); // right call
    }
    
    int IsIslad(vector<vector<int>>&grid){
        
        int isLandCount = 0;
        for(int i =0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                if(grid[i][j] == '1'){
                    isLandCount++;
                    dfs(grid,i,j);
                }
            }
        }
        return isLandCount;
    }
    
    bool cycledetection(int node,int parent,vector<vector<int>>&grid,vector<bool>&vis){   // Based on DFS
       
        vis[start] = true;

        for(int ni:grid[node]){
            if(!vis[ni]){
                if(cycledetection(ni,node,grid,vis))return true;  // Recursive  call
            }
            else if(parent != node){
                return true;
            }
        }

        return false;
    }

};

int main(){
    Graph obj;
    obj.BFS(start,graph);
    obj.DFS(start,graph,vis);

    return 0;
}
