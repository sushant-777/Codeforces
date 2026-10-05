#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n ,m ;
        cin >> n >> m ;

        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<vector<long long>> a(n, vector<long long>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        int answer = m;

        vector<long long>best ;
         for (int i = n - 1; i >= 0; i--) {
            sort(a[i].begin(), a[i].end(), greater<long long>());

            vector<long long> merged(best.size() + m);
            merge(best.begin(), best.end(), a[i].begin(), a[i].end(), merged.begin(), greater<long long>());
            if ((int)merged.size() > m) {
                merged.resize(m);
            }
            best = merged;

            vector<long long> prefix(best.size());
            long long sum = 0;
            for (size_t k = 0; k < best.size(); k++) {
                sum += best[k];
                prefix[k] = sum;
            }

            int idx = lower_bound(prefix.begin(), prefix.end(), v[i]) - prefix.begin();
            if (idx < (int)prefix.size()) {
                answer = min(answer, idx + 1);
            }
        }

        cout << answer << endl;

    }

    return 0 ;
}