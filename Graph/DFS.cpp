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


 #include<bits/stdc++.h>
 using namespace std;
 
 void dfsHelper(int u,vector<bool>&visited,vector<vector<int>>&mat,int V){
     cout<<u+1 <<" ";
     visited[u] = true;
     
     for(int i=0;i<V; i++){    // checking naughbours 
         if(mat[u][1] == 1 && !visited[i]){
             dfsHelper(i,visited,mat,V);
         }
     }
 }
 
 void dfs(vector<vector<int>>&mat,int V){
    
    vector<bool>visited(V,false);
    
    for(int i =0;i<V; i++){
        if(!visited[i]){
            dfsHelper(i,visited,mat,V);
        }
    }
     
 }
 
 int main(){
     
     int V,E;
     cin>>V>>E;
     
     vector<vector<int>>mat(V,vector<int>(V,0));
           int u,v;
     
     for(int i =0;i<E; i++){
         cin>>u>>v;
         u--;
         v--;
         mat[u][v] = 1;      // Creating entry 
         mat[v][u] = 1;
     }
     cout<<"\n";
     for(int i =0; i<V; i++){
         for(int j =0;j<V; j++){
             cout<<mat[i][j]<<" ";
         }cout<<endl;
     }
     cout<<"DFS CALL"<<"\n";
     dfs(mat,V);
     
     return 0;
 }
