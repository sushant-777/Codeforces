#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (auto &it : arr) cin >> it;

        long long answer = -1;
        for (int i = 1; i <= 62; i++) {   
            long long num = (1LL << i);
            set<long long> st;
            for (int j = 0; j < n; j++) {
                st.insert(arr[j] % num);
            }
            if (st.size() == 2) {
                answer = num;
                break;
            }
        }
        cout << answer << "\n";
    }
    return 0;
}
