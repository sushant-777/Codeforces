#include <bits/stdc++.h>
using namespace std;

void divide(vector<long long>& arr, long long g1, long long g2, long long &ans, size_t idx) {
    if (idx == arr.size()) {
        ans = min(ans, abs(g1 - g2));
        return;
    }

    divide(arr, g1 + arr[idx], g2, ans, idx + 1);
    divide(arr, g1, g2 + arr[idx], ans, idx + 1);
}

int main() {
    long long n;
    cin >> n;
    vector<long long> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long ans = 1e18;
    divide(arr, 0, 0, ans, 0);

    cout << ans << endl;
    return 0;
}

// Passed the ans by reference so used void , below one is more dp approach

/*        OR  


long long divide(vector<long long>& arr, long long g1, long long g2, int idx) {
    if (idx == arr.size()) {
        return abs(g1 - g2);
    }
    long long left = divide(arr, g1 + arr[idx], g2, idx + 1);
    long long right = divide(arr, g1, g2 + arr[idx], idx + 1);
    return min(left, right);
}

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << divide(arr, 0, 0, 0) << endl;
    return 0;
}
*/