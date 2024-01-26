vector<int> bellmonFord(int n, int m, int src, vector<vector<int>> &edges) {
  // create a distance vector
    vector<int>dist(n+1,1e8);

    // make starting node 0;
    dist[src] = 0;
 
   // appyl the formula on node up to n-1 time
   for(int i = 1; i<n;i++){
     
    //  traverse on edges list 
    for(int j =0; j<m; j++){
        int u = edges[j][0];
        int v = edges[j][1];
        int wt = edges[j][2];

        if(dist[u] != 1e9 && ((dist[u]+wt)<dist[v])){
            dist[v] = dist[u]+ wt;
        }
     }
   }
 
    // check for negative cycle
   return dist; 
  //   bool flag = false;

  //   for(int j=0;j<m;j++){
  //       int u = edges[j][0];
  //       int v = edges[j][1];
  //       int wt = edges[j][2];

  //       if(dist[u] != 1e8 && ( (dist[u]+wt)<dist[v]) ){
  //        flag = true;    //-ve cycle present
  //       }
  //   }
  //   if(flag){
  //       return {};
  //  }

  
  
}