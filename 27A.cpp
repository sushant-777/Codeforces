#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cin >> n ;
    vector<int>arr ;
    for(int i=0 ;i<n ;i++){
        int a ;
        cin >> a ;
        arr.push_back(a) ;
    }

    sort(arr.begin(),arr.end()) ;
    int ans ;
    bool flag = true ;

    for(int i=0 ;i<n ;i++){
        if(arr[i] != i+1){
            ans = i+1 ;
            flag = false ;
            break ;
        }
    }

    if(!flag)
    cout << ans << endl ;
    else
    cout << n+1 << endl ;
    return 0 ;
}