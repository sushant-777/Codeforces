#include <bits/stdc++.h>
using namespace std;        

int main(){
    long long q ;
    cin >> q ;

    while(q--){
        long long k ;
        cin >> k ;

        long long dig_len = 1 ;
        long long cnt = 9 ;
        long long st = 1 ;

        while( k > st + dig_len * cnt-1){
            st += dig_len * cnt ;
            dig_len++ ;
            cnt *= 10 ;
        }


        long long first_num = pow(10 , dig_len-1) ;

        long long offset = (k-st)/dig_len ;

        long long target = first_num + offset ;

        string num_str = to_string(target) ;

        long long digit = k-st ;

        cout << num_str[digit%dig_len]  << endl;


    }

    return 0 ;
}