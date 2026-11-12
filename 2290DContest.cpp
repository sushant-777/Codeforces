#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;

        bool flag[26] = {false} ;

        for(int i=0 ;i<n/2 ;i++){
            int p = min(s[i],s[n-i-1]) - 'a' ;
            int q = max(s[i],s[n-i-1]) - 'a' ;

            for(int j=p+1 ; j<=q ;j++){
                flag[j] =  true ;
            }
        }

        int ans  = 0 ;

        for(int i=0 ;i<26 ;i++){
            ans += flag[i] ;
        }

        cout << ans << endl ;
    }
    return 0 ;
}