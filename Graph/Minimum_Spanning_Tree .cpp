#include<bits/stdc++.h>
#include<algorithm>
bool cmp(vector<int>&a,vector<int>&b){
  return a[2] < b[2];
}
void makeSet(vector<int>&parent,vector<int>&rank,int n){
//  rank or parent ko initilase kar do

  for(int i =0; i<n; i++){
   parent[i] = i;
   rank[i] = 0;
  }
 }

//  fid parent // by recursion
 int findParent(vector<int>&parent,int node){
    
    if(parent[node] == node){
      return node;
    }

    // recursive call

    return parent[node] = findParent(parent,parent[node]);
 }

// union set
void unionSet(int u,int v,vector<int>&parent,vector<int>&rank){
   
  //  step 1 Find parent of that node

  u = findParent(parent,u);
  v = findParent(parent,v);

  if(rank[u]< rank[v]){
    parent[u] = v;
  }
  else if(rank[u]>rank[v]){
    parent[v] = u;
  }
  // if both are at same rank anyone can become parent 
  else{
    parent[v] = u;
    // increase the rank 
    rank[u]++;
  }

}


int minimumSpanningTree(vector<vector<int>>& edges, int n)
{
  // sort the vector
 sort(edges.begin(),edges.end(),cmp);
 vector<int>parent(n);
 vector<int>rank(n);
 makeSet(parent,rank,n);

 int minweight = 0;
 for(int i = 0; i<edges.size(); i++){
     int u = findParent(parent,edges[i][0]);
     int v = findParent(parent,edges[i][1]);
    // weight of the edge
     int wt = edges[i][2];

     if(u != v){
       minweight += wt;
       unionSet(u,v,parent,rank);
     }
 } 
   return minweight;
}


// T.C nlog(m);   union disjoint set will nearly take o(1);
// S.C O(n);