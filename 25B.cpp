#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    string s ;
    cin >> s ;

    int i= 0 ;
    int cnt = 0 ;
    string ans = "";
    while(i<n){
        ans += s[i] ;
        cnt++ ;
        if(cnt == 2 && i<n-2){
            ans += "-" ;
            cnt = 0 ;
        }
        
        i++;
    }
    cout << ans << endl;

    return 0 ;
}