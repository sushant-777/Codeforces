#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    long long W;
    cin >> N >> W;

    vector<int> w(N), v(N);
    for (int i = 0; i < N; i++) cin >> w[i] >> v[i];

    int maxValue = 0;
    for (int i = 0; i < N; i++) maxValue += v[i];

    long long INF = 1e18;
    vector<long long> dp(maxValue + 1, INF);
    dp[0] = 0;

    for (int i = 0; i < N; i++) {
        for (int val = maxValue - v[i]; val >= 0; val--) {
            if (dp[val] != INF) {
                dp[val + v[i]] = min(dp[val + v[i]], dp[val] + w[i]);
            }
        }
    }

    int ans = 0;
    for (int val = 0; val <= maxValue; val++) {
        if (dp[val] <= W) ans = val;
    }

    cout << ans << endl;
    return 0;
}
