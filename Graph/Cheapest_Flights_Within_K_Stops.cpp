class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
      vector<int>distance(n,INT_MAX);

      unordered_map<int, vector<pair<int,int>> >adj;

      for(vector<int>&vec: flights){
          int u = vec[0];
          int v = vec[1];
          int cost = vec[2];

          adj[u].push_back({v,cost});
      }  

    //   bfs

    queue<pair< int,int>>q;
    q.push({src,0});
    distance[src] = 0;

    int steps = 0;

    while(!q.empty() && steps <=k){
       
       int N = q.size();

       while(N--){
          int u = q.front().first;
          int d = q.front().second;
          
          q.pop();

        //   process with other node's costs 
        for(pair<int,int>& P: adj[u]){
            int v = P.first;
            int cost = P.second;

            if(distance[v]> d + cost){
                distance[v] = d +cost;
                q.push({v,d+cost});
            }
        }
       }
       steps++;
    }
   if(distance[dst] == INT_MAX){
       return -1 ;
   }

   return distance[dst];

    }
};