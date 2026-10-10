#include <bits/stdc++.h>
using namespace std;

bool check(long long s, int n, int k, const vector<long long>& freq) {
    long long K = (long long)k + n + 2 * s;

    vector<long long> cnt = freq;
    vector<int> st;

    long long C = 0;
    long long used = 0;

    for (int T = n; T >= 1; T--) {
        C += cnt[T];
        if (cnt[T] > 0) st.push_back(T);

        long long excess = C - (K - T);

        while (excess > 0) {
            if (st.empty() || st.back() > 2 * T - 2) return false;

            int v = st.back();
            long long take = min(cnt[v], excess);

            cnt[v] -= take;
            if (cnt[v] == 0) st.pop_back();

            C -= take;
            excess -= take;
            used += take;
            if (used > s) return false;

            cnt[(v + 1) / 2] += 2 * take;
        }
    }
    return used <= s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<long long> freq(n + 2, 0);
        for (int i = 0; i < n; i++) freq[a[i]]++;

        int lo = 0, hi = 2 * n + 2;
        while (lo < hi) {
            int mid = (lo + hi) / 2;
            if (check(mid, n, k, freq)) hi = mid;
            else lo = mid + 1;
        }

        cout << (long long)n + 2LL * lo << endl;
    }
    return 0;
}