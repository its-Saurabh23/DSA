#include<bits/stdc++.h>

 void dfs(int node, unordered_map<int,bool>&visited,
    stack<int>&st,unordered_map<int,list<int>>&adj){

 visited[node] = true;

for(auto nbr :adj[node]){
    if(!visited[nbr]){
		dfs(nbr,visited,st,adj);
	}
}
// topo sort  
  st.push(node);
}


 void redfs(int node,unordered_map<int,bool>&visited
 ,unordered_map<int,list<int>>&adj){

 visited[node] = true; 
 for(auto nbr:adj[node]){
	if(!visited[nbr]){
		redfs(nbr,visited,adj);
	}
 } 

 }

int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
	// adj list
    unordered_map<int,list<int>>adj;

	for(int i =0;i<edges.size();i++){
		int u = edges[i][0];
		int v = edges[i][1];
        adj[u].push_back(v);
		
	}

	// topo sort karna hai
	unordered_map<int,bool>visited;
	stack<int>st;
	// 
	for(int i =0; i<v; i++){
		if(!visited[i]){
			dfs(i,visited,st,adj);
		}
	}
//   create a transpose graph 
  unordered_map<int,list<int>> transpose;
  for(int i = 0;i<v;i++){
	  visited[i] = 0;
	  for(auto nbr:adj[i]){
		  transpose[nbr].push_back(i);
	  }
  }

//   call dfs using above ordering 
    int count  = 0;
    while(!st.empty()){
      int top = st.top();
	  st.pop();

	  if(!visited[top]){
		  count++;
		  redfs(top,visited,transpose);
	  }
    }
	return count;

}