#include<bits/stdc++.h>
using namespace std;    

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n , k ;
        cin  >> n>> k ;
        vector<long long>arr(n) ;
        for(int i=0 ;i<n ;i++){
            cin >> arr[i] ;
        }
        
        long long T = n-k+1 ;
        long long sum = 0 ;
        if (T >= k) {
            for (int i = k-1; i <= n-k; i++) sum += arr[i];
            for (int i = 0; i <= k-2; i++) {
                sum += max(arr[i], arr[n-1-i]);
            }
        } else {
            for (int i = 0; i < T; i++) {
                sum += max(arr[i], arr[n-1-i]);
            }
        }

        cout << sum << endl ;
    }

    return 0 ;
}