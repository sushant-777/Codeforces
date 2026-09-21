#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t; 
    while(t--){
        long long  a ,b , c ;
        cin >> a>> b>>c ;

        long long d0 = a - b;
        long long ans = max(llabs(d0 + c), min(llabs(d0), llabs(d0 - c)));
        cout << ans << endl;
    }

    return 0 ;
}