#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int N = 1;
        while (N <= n) {
            N = N * 2;
        }

        cout << 2 * N - 1 << endl;

        cout << 0;
        for (int i = 1; i < N; i++) {
            int lowbit = i & (-i);      
            cout << " " << lowbit << " " << 0;
        }
        cout << endl;
    }
    return 0;
}