#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  bool cycle(int src,vector<int>&visited,
  vector<int>&dfsVisited,vector<int>adj[]){
    visited[src] = true;
    dfsVisited[src] = true;
    
      for(auto x:adj[src]){
          if(!visited[x])
          {
              if(cycle(x,visited,dfsVisited,adj)){
                  return true;
              }
          }
          else if(visited[x] == true && dfsVisited[x] == true){
              return true;
          }
      }
      dfsVisited[src] = false;
      return false;
  }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        
        vector<int>visited(V,false),dfsVisited(V,false);
        
        for(int i = 0; i<V;i++){
            if(!visited[i]){
                if(cycle(i,visited,dfsVisited,adj)){
                    return true;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends