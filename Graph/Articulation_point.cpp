#include<bits/stdc++.h>
using namespace std;
 
void dfs(int node,int parent,vector<int>&disc,vector<int>&
low,unordered_map<int,bool>&vis,unordered_map<int,list<int>
>&adj,vector<int>&ap,int &timer){
     
     
    vis[node] = true;
    disc[node] = low[node] = timer++;
    
    int child = 0;
    
    for(auto nbr: adj[node]){
        if(nbr == parent){
            continue;
        }
        if(!vis[nbr]){
            dfs(nbr,node,disc,low,vis,adj,ap,timer);
            
            low[node] = min(low[node],low[nbr]);
            
            // check articulation point
            
            if(low[nbr] >= disc[node] && parent != -1){
                ap[node] = 1;
            }
            child++;
        }
        else{
            low[node] = min(low[node],disc[nbr]);
        }
    }
    if(parent == -1 && child>1){
        ap[node] = 1;
    }
 }
int main(){
     
     int n = 5;
     int e = 5;
     
    vector<pair<int,int> >edges;
    
    edges.push_back(make_pair(0,3));
    edges.push_back(make_pair(3,4));
    edges.push_back(make_pair(0,4));
    edges.push_back(make_pair(0,1));
    edges.push_back(make_pair(1,2)); 
    //  adj lsit
    
    unordered_map<int,list<int>>adj;
    
    for(int i = 0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    int timer  = 0;
    vector<int>disc(n);
    vector<int>low(n);
    unordered_map<int,bool>vis;
    vector<int>ap(n,0);
    
    // initiltise the above D.S.
    for(int i= 0; i<n; i++){
        disc[i] = -1;
        low[i] = -1;
    }
    
    // dfs logic
    for(int i =0; i<n; i++){
        if(!vis[i]){
            
            dfs(i,-1,disc,low,vis,adj,ap,timer);
        }
    }
     
    //  print ap
    std::cout << "articulation point" << std::endl;
    
    for(int i = 0; i<n; i++){
      if(ap[i] != 0) {
         cout<< i <<" ";
      }  
      cout<<endl;
    }
    return 0;
 } 
 