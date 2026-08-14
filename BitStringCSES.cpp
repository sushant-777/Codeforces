
#include <bits/stdc++.h>
using namespace std ;
long long mod = 1e9+7 ;

long long val(int a ,long long n){
    if(n == 1) return a ;

   long long res = val(a,n/2) ;

   if(n%2 == 0) return res*res % mod ;
   else return res*res*2 % mod ;
}

int main(){
    long long n ;
    cin >> n ;

    long long ans = val(2,n) ;
    cout << ans << endl ;
    return 0 ;
}