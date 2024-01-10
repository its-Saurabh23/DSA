 vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
    unordered_map<int,list<int>>adj;
    for(int i= 0;i<edges.size();i++){
        int u  = edges[i][0];
        int v = edges[i][1];
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
        int dist[N];
        for(int i = 0;i<N;i++) dist[i] = 1e9;
        // BFS Implementation.
        dist[src] = 0; 
        queue<int> q;
        q.push(src); 
        while(!q.empty()) {
            int node = q.front(); 
            q.pop(); 
            for(auto it : adj[node]) {
                if(dist[node] + 1 < dist[it]) {
                    dist[it] = 1 + dist[node]; 
                    q.push(it); 
                }
            }
        }
        // Updated shortest distances are stored in the resultant array ‘ans’.
        // Unreachable nodes are marked as -1. 
        vector<int> ans(N, -1);
        for(int i = 0;i<N;i++) {
            if(dist[i] != 1e9) {
                ans[i] = dist[i]; 
            }
        }
        return ans; 
    }