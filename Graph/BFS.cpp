#include<bits/stdc++.h>
#include<queue>
void bfs(vector<vector<int>> &adj,unordered_map<int,bool>visited
,vector<int>&ans,int node){
  

  queue<int>q;
  q.push(node);
  visited[node] = 1;
  while(!q.empty()){
    // step 1;
      int forntNode = q.front();
      
      // step 2;  
      q.pop();

      // store in ans
      ans.push_back(forntNode);

      // travese all the neighbour node
      for(auto i:adj[forntNode]){
        
        if(!visited[i]){
          q.push(i);
          // assign true 
          visited[i] = 1;
        }
      }
  }
}
vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
   unordered_map<int,bool>visited;
   vector<int>ans;

   bfs(adj,visited,ans,0);

   return ans;
}