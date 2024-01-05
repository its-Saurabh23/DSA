#include<bits/stdc++.h>

bool cycleDSF(int node,unordered_map<int,bool>&visited,
unordered_map<int,list<int>>&adj){
  
//   make a parent map
unordered_map<int,int>parent;
 
  // first element parent will be -1;   
  parent[node] = -1;
  visited[node] = 1;

  queue<int>q;
  q.push(node);

  while(!q.empty()){
      int fornt = q.front();
      q.pop();

      for(auto i:adj[fornt]){
          if(visited[i] == true 
            && i != parent[fornt]){
              return true;
          }
          else if(!visited[i]){
              q.push(i);
              visited[i] = 1;
              parent[i] = fornt;
          }
      }
  }
  return false;

}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // prepare adcency list
unordered_map<int,list<int>>adj;
    for(int i=0;i<m;i++){
        int u = edges[i][0];
        int v = edges[i][1];
 
    // because it is a undorected graph;  
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // visited array/unordered_map
    unordered_map<int,bool>visited;

    // handle disconnected graph
    for(int i =0;i<n;i++){
        if(!visited[i]){
            bool ans = cycleDSF(i,visited,adj);

            if(ans== 1){
                return "Yes";
            }
        }
    }
    return "No";
}

// Linear Time complexity