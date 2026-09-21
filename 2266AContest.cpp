#include <bits/stdc++.h>
using namespace std ;

int main(){

    int t ;
    cin >> t ;
    vector<int>arr(3) ;
    while(t--){
        int n ;
        cin >> n ;

        for(int i=0 ;i<3;i++){
            cin >> arr[i] ;
        }

        int mini = min({arr[0],arr[1],arr[2]}) ;
        cout << n - mini << endl ;
    }

    return 0;
}