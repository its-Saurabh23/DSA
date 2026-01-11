 #include <bits/stdc++.h>
using namespace std;

int t[1001][1001];   // DP table

int CountofSubsetSum(vector<int> &arr, int sum, int n) {
    // Base cases
    if (sum == 0)
        return 1;

    if (n == 0)
        return 0;

    if (t[n][sum] != -1)
        return t[n][sum];

    // Not take current element
    int notTake = CountofSubsetSum(arr, sum, n - 1);

    // Take current element (only if possible)
    int take = 0;
    if (sum >= arr[n - 1])
        take = CountofSubsetSum(arr, sum - arr[n - 1], n - 1);

    return t[n][sum] = take + notTake;
}

int main() {
    vector<int> arr = {1, 2, 3, 3};
    int sum = 6;
    int n = arr.size();

    memset(t, -1, sizeof(t));

    cout << "Count of subsets = " << CountofSubsetSum(arr, sum, n);

    return 0;
}
