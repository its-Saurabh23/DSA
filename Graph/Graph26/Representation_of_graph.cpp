// Undirected,unweighted graph
#include<bits/stdc++.h>
using namespace std; 
int main(){
    int V,E; 
    vector<vector<bool>>mat(V,vector<bool>(V,0));
    
    int u,v;
    for(int i =0;i<E; i++){
      cin>>u>>v;
      mat[u][v] = 1;
      mat[v][u] = 1;
    }
    cout<<"Adjacency Matrix"<<"\n";
    for(int i =0; i<V; i++){
        for(int j=0;j<V; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

// Undirected,weighted graph
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int V,E;
  cin>>V>>E;
  vector<vector<int>>mat(V,vector<int>(V,0));
  int u,v,w;
  
  for(int i =0;i<E;i++){
      cin>>u>>v>>w;
      mat[u][v] = w;
      mat[v][u] = w;
  }
  
  cout<<"Adjacency Matrix"<<"\n";
  for(int i=0;i<V; i++){
      for(int j =0;j <V; j++){
          std::cout << mat[i][j]<<" ";
      }
       cout<<"\n";
  }
  return 0;
}