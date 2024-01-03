class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.

   void dfs(int node,vector<int>adj[],vector<int>&visited,vector<int>&ans){
     

       ans.push_back(node);
        visited[node]= 1;       
       
       for(auto it:adj[node]){
           if(!visited[it]){
               dfs(it,adj,visited,ans);
           }
       }
       
   }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
        vector<int>visited(V,0);
        vector<int>ans;
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
            dfs(i,adj,visited,ans);
        }
    }
    return ans;
    }
};

// T.c
// O.S       both are linear