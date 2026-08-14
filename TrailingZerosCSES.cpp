#include <bits/stdc++.h>
using namespace std ;

int main(){

    int n ;
    cin >> n ;

    int cnt = 0 ;
    int i=5 ;
    //int temp = n ;
    while(i <= n){
        int temp = n ;
        cnt += temp/i ;
        i =i*5 ;
    }

    cout << cnt << endl ;

    return 0 ;
}