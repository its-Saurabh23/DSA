#include <bits/stdc++.h> 
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // step 1  make a adjeceny list for weighted graph

    unordered_map<int,list<pair<int,int> >> adj;
    for(int i =0; i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        // for weighted
        int w = edges[i][2];
        
        adj[v].push_back(make_pair(v,w));
        adj[u].push_back(make_pair(u,w));   
    }
    // step 2 create distance array with inifinte initilaization arry
    vector<int>dist(vertices);

    for(int i = 0;i<vertices;i++){
        dist[i] = INT_MAX;
    }

    // step 3 create a set with the source Node in pair fomate
    set<pair<int,int>st;
                    //distance , source Node   
    st.insert(make_pair(0,source));

    // process the stack
    while(!st.empty()){
        auto top = *[st.begin()];
        int nodeDistace = top.first;
        int topNode = top.second;

        // remove the top from the stack
        st.erase(st.begin());

    }

}
