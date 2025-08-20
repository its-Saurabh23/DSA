#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>>&mat,int row,int col,vector<vector<bool>>&visited,int N) {
	if(row>=0 && row<N && col>=0 && col<N && !visited[row][col] && mat[row][col] != 0) {
		return true;
	}
	return false;
}

void rateInMaze(vector<vector<int>>mat,int row,int col,vector<string>&paths,string path,vector<vector<bool>>&visited,int N) {
	if(row == N-1 && col == N-1) {
		paths.push_back(path);
	}

	visited[row][col] = 1;

	if(mat[row][col] == 1) {

		// Down
		if(isSafe(mat,row+1,col,visited,N)) {
			rateInMaze(mat,row+1,col,paths,path+"D",visited,N);
		}
		// up
		if(isSafe(mat,row-1,col,visited,N)) {
           rateInMaze(mat,row-1,col,paths,path+"U",visited,N);
		}
		// Left
		if(isSafe(mat,row,col-1,visited,N)) {
           rateInMaze(mat,row,col-1,paths,path+"L",visited,N);
		}
		// right
		if(isSafe(mat,row,col+1,visited,N)) {
           rateInMaze(mat,row,col+1,paths,path+"R",visited,N);
		}
		
		// BackTrack.
		visited[row][col] = 0;
	}
	return; 
}

int main() {
	vector<vector<int>>mat= {
		{1, 0, 0, 0},
		{1, 1, 0, 1},
		{1, 1, 0, 0},
		{0, 1, 1, 1}

	};
	vector<vector<bool>>visited= {
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}
	};
	
	vector<string>paths;
	int N = mat.size();
	
	rateInMaze(mat,0,0,paths,"",visited,N);

	if(paths.empty()) {
		cout<<"Edge case reach"<<endl;
	}
	for(string str:paths) {
		std::cout << str << std::endl;
	}

	return 0;
}