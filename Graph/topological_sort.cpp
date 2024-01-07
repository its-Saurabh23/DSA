#include <bits/stdc++.h> 
bool topoSort(int node,vector<bool>&visited,unordered_map<int,list<int>>&adj,
stack<int>&s){

    visited[node] = true;
    //  rest of the nodes

    for(auto it:adj[node]){
        if(!visited[it]){
            topoSort(it,visited,adj,s);
        }
    }

//  bapoas aate time stack m push kar do 
    s.push(node);
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // step 1 adjList

    unordered_map<int,list<int>>adj;

    for(int i =0; i<e;i++){
       int u = edges[i][0];
       int v = edges[i][1];
    //    DAG Directed Acycleic Graph 
    adj[u].push_back(v);
    }
   
    // create a stack
    stack<int>s;

    // step 2 make a visited map
    vector<bool>visited(v);
    for(int i =0; i<v; i++){
        if(!visited[i]){
            topoSort(i,visited,adj,s);
        }
    }

    vector<int>ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();

    } 
    return  ans;
}