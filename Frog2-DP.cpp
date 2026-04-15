#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& arr, vector<int>& dp, int n, int k) {
    if (n == 0) return 0;  

    if (dp[n] != -1) return dp[n];

    int cost = INT_MAX;
    for (int j = 1; j <= k; j++) {
        if (n - j >= 0) {
            cost = min(cost, solve(arr, dp, n - j, k) + abs(arr[n] - arr[n - j]));
        }
    }

    return dp[n] = cost;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> dp(n, -1);
    int ans = solve(arr, dp, n - 1, k);  
    cout << ans << endl;

    return 0;
}
