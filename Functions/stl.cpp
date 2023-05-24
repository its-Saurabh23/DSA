// C++ program to demonstrate
// functionality of unordered_map
#include <iostream>
#include <unordered_map>
using namespace std;

// Driver code
int main()
{
 
unordered_map<string, int> umap;
 
umap["GeeksforGeeks"] = 10;
umap["Practice"] = 20;
umap["Contribute"] = 30;

// Traversing an unordered map
for (auto x : umap)
	cout << x.first << " " <<
			x.second << endl;
}
