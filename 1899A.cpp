#include <bits/stdc++.h>
using namespace std ;

int main(){

    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;

        bool flag = false ;

     if(n == 3){
            cout << "Second" << endl ;
            flag = true ;
        }
        else if(n % 3 == 0 && n != 3) {
            cout << "Second" << endl ;
            flag = true ;
        }

        else {
            if(flag == false) cout << "First" << endl;
        }
    }
    return 0 ;
}