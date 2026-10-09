#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin>> n;

        vector<long long>arr(n); 
        for(int i=0 ; i<n ;i++){
            cin >> arr[i] ;
        }
        
        for(int i=0 ;i<n ;i++){
            if(arr[i]%2 == 1){
                arr[i] += arr[i] % 10 ;
            }
        }

        bool same = true ;
        for(int i=1 ;i<n ;i++){
            if(arr[i] != arr[0]){
                same = false ;
                break;
            }
        }

        if(same){
            cout << "YES" << endl ;
            continue;
        } 

        bool hasZero = false;
         for (int i = 0; i < n; i++){
            if (arr[i] % 10 == 0){
                 hasZero = true; 
                 break; 
            }
         }
             
        if (hasZero) {
            cout << "NO" << endl;
            continue;
        }

        for (int i = 0; i < n; i++) {
            while (arr[i] % 10 != 2) {
             arr[i] += arr[i] % 10;
            }
            arr[i] %= 20;
        }

        same = true;
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[0]) {
            same = false;
            break;
        }
    }

        if (same == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
    return 0 ;
}