#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t  ;
    while(t--){
        int a , b ,c ;
        cin >> a >> b >> c ;

        if(abs(b-a) == 1 && abs(c-b) == 1){
            cout << "Yes" << endl ;
        }
        else{
            cout << "No" << endl ;
        }
    }

    return 0 ;
}