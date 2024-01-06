#include<bits/stdc++.h>
using namespace std;
class graph{
    
    public:
    unordered_map<int,list<int>>adj;

    void addEdge(int u,int v,bool directoin){
        //  directoin 0 = undirected graph;
        //  direction 1 = directed graph;
        
        adj[u].push_back(v);
        if(directoin == 0){
            adj[v].push_back(u);
        }
    } 
    void print(){
        for(auto i:adj){
            std::cout << i.first << "->";
            
            for(auto j:i.second){
                std::cout << j <<",";
            }
            cout<<endl;
        }
    }
};
int main(){
    
    int n;
    std::cout <<"Enter the number of Nodes"<< std::endl;
    std::cin >> n;
   
    
    int m;
    std::cout << "Enter the number of edges" << std::endl;
    std::cin >> m;
    
    // cosntructor..
    graph g;
   
    for(int i = 0; i<m; i++){
        int u,v;
        std::cin >> u>>v;
        
        g.addEdge(u,v,0);
    }
    g.print();
    return 0;
}

//  adjcency list 

//first  second  
// 4->   3,0,
// 3->   2,4,1,
// 2->   1,3,
// 1->   0,2,3,
// 0->   1,4,
             
