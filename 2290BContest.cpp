#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;

    while(t--){

        int n ;
        cin >>  n ;

        string s ;
        cin >> s ;

        int cnt  = 0 ;
        if(s[0] == 'B') cnt++ ;

        for(int i=1 ;i<n ;i++){
           if(s[i] == s[i-1]) cnt++ ;
        }


        cout << cnt << endl;
    }

    return 0 ;
}