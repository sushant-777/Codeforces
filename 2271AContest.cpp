#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t;
    cin >> t ;
    while(t--){
        int a , b;
        cin >> a >> b;

        if(a == 0 && b == 0){
            cout << 0 << endl;
        }
        else if(a % 2 == b % 2 ){
            if(a < b) cout << -1 << endl ;
            else cout << a << endl ;
        }
        else{
            if (b <= a + 1) cout << a+1 << endl ;
            else cout << -1 << endl ;
        }

    }
    return 0;
}