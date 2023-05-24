 #include<iostream>
 #include<unordered_map>
 using namespace std;
 
 int main(){
 	unordered_map< string ,int> umap;
 	
 	umap["kk"] = 10;
 	umap["ll"] = 11;
	umap["mm"] = 12;
 for (auto x: umap)
 cout<<x.first<<" "<<x.second <<endl;
 
 return 0;
 
 }
