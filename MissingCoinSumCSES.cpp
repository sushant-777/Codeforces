#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin >> n ;

    long long sum = 0 ;

    vector<int>arr(n) ;
    for(int i=0 ;i<n ;i++){
        cin >> arr[i] ;
        sum += arr[i] ;
    }

    sort(arr.begin(),arr.end()) ;
    long long ans = 1 ;

    for (long long c : arr) {
        if (c > ans) break;
        ans += c;
    }

    cout << ans << endl ;

    return 0 ;
}