/*
The first input line contains an integer n.
The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).
O/p-> Print the missing number
*/

#include <bits/stdc++.h>
using namespace std ;

int main(){

    int n ;
    cin >> n ;

    vector<int>arr(n-1) ;
    for(int i=0 ;i<n-1 ;i++){
        cin >> arr[i] ;
    }

    int xo = 0 ;
    for(int i=1 ;i<=n ;i++){
        xo = xo^i ;
    }

    for(int i= 0 ;i<n-1 ;i++){
        xo = xo ^ arr[i] ;
    }

    cout << xo << endl ;


    return 0 ;
}