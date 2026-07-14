#include <bits/stdc++.h>
using namespace std  ;

int main(){

    int k ;
    cin >> k ;

    for(int i=1 ;i<= k ;i++){

        long long tc = i*i ;
        if(i == 1){
            cout << 0 << endl ;
        }
        else{
            long long removing = tc*(tc-1)/2 ;

            long long slabs = 2*2*(i-1)*(i-2);

            cout << removing - slabs << endl;
        }
    }

    return 0 ;
}