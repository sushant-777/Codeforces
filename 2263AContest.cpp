#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >>n ;
        vector<int>arr(n) ;
        int cnt0 =0;
        int cnt1=0;
        for(int i=0 ;i<n ;i++){
            cin >> arr[i] ;
            if(arr[i] == 0) cnt0++ ;
            if(arr[i] == 1) cnt1++ ;
        }

        if(cnt0 > cnt1){
            cout << "Elsie" << endl ;
        }else{
            cout << "Bessie" << endl ;
        }

    }

    return 0 ;
}

// 110000100000