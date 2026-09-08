#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false) ;
    cin.tie(0) ;

    int t ;
    cin >> t ;
    while(t--){
        long long x , y , k ;
        cin >> x >> y >> k ;

        long long val = y-x ;
        long long last = x+k-1 ;
        long long mini = min(val,last) ;

        long long ans = 0 ;
        long long cnt = 0 ;

        if(mini >= x){
            cnt = mini-x +1 ;

            for(long long a = x ; a <= mini ; a++){
                ans += val%a ;
            }
        }

        long long large_cnt = k-cnt ;
        ans += large_cnt*val ;



       cout << ans << endl ;

    }

    return 0 ;
}