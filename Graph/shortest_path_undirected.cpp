#include<bits/stdc++.h>

vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	// step 1  make a adjecncy list
  unordered_map<int,list<int>>adj;

	for(int i= 0;i<edges.size();i++){
		int u = edges[i].first;
		int v = edges[i].second;

		// this is undirected graph so 
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	// visited array / map
	unordered_map<int,bool>visited;

	// parent map
	unordered_map<int,int>parent; 
    
	// do bfs
	queue<int>q;
	q.push(s);   // s->staring node (given in question);
	parent[s]= -1;
	visited[s] = true;

	while(!q.empty()){
		int front = q.front();
		q.pop();
		// rest of the adjecent nodes
		for(auto it:adj[front]){
			if(!visited[it]){
				visited[it] = true;
				parent[it] = front;
				q.push(it);
			}
		}

	}

	//preparaing shortest path 
	vector<int>ans;
	
	int current = t; // t->end node
	ans.push_back(t);
	while(current != s){
		current = parent[current];
		ans.push_back(current);
	}

	// reverse the ans;
	reverse(ans.begin(),ans.end());

	return ans;


	
}