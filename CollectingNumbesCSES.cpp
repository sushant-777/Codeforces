#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin >> n ; 
    vector<int>arr(n) ;
    for(int i=1 ;i<=n ;i++){
        cin >> arr[i] ;
    }

    map<int,int>mp ;
    for(int i=1 ;i<=n ;i++){
        mp[arr[i]] = i ;
    }

    int cnt = 1 ;
    for(int i=2 ;i<=n ;i++){
        if(mp[i] < mp[i-1]) cnt++ ;
    }
    cout << cnt << endl ;
    return 0;
}