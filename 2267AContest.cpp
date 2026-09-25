#include <bits/stdc++.h>
using namespace std ;

int main(){

    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        char ch ;
        cin >> ch ;

        string s ;
        cin >> s ;

        int cost = 0; 

       for(int i = 0, j = n-1; i < j; i++, j--){
            if(s[i] == s[j]) continue;
            if(s[i] == ch || s[j] == ch) cost += 1;
            else cost += 2;
        }
        cout << cost << endl ;

    }


    return 0 ;
}