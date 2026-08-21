#include <bits/stdc++.h>
using namespace std;

void helper(vector<vector<int>>& mat, int row, int col,
            string path, vector<string>& ans,
            vector<vector<bool>>& vis) {

    int n = mat.size();

    // Base case
    if (row < 0 || row >= n ||
        col < 0 || col >= n ||
        mat[row][col] == 0 ||
        vis[row][col] == 1) {
        return;
    }

    // Destination
    if (row == n - 1 && col == n - 1) {
        ans.push_back(path);
        return;
    }

    // Mark visited
    vis[row][col] = 1;

    // Down
    helper(mat, row + 1, col, path + "D", ans, vis);

    // Up
    helper(mat, row - 1, col, path + "U", ans, vis);

    // Left
    helper(mat, row, col - 1, path + "L", ans, vis);

    // Right
    helper(mat, row, col + 1, path + "R", ans, vis);

    // Backtracking
    vis[row][col] = 0;
}

vector<string> rateInMaze(vector<vector<int>>& mat) {

    int n = mat.size();

    vector<string> ans;
    vector<vector<bool>> vis(n, vector<bool>(n, false));

    string path = "";

    helper(mat, 0, 0, path, ans, vis);

    return ans;
}

int main() {

    vector<vector<int>> mat = {
        {1, 0, 0},
        {1, 1, 0},
        {1, 1, 1}
    };

    vector<string> ans = rateInMaze(mat);

    for (string str : ans) {
        cout << str << " ";
    }

    return 0;
}
