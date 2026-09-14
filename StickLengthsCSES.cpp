#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    vector<int>arr(n) ;
    for(int i=0 ;i<n ;i++){
        cin >> arr[i] ;
    }

    sort(arr.begin(),arr.end()) ;
    long long cost = 0 ;

    int s = 0  ;
    int e = n-1 ;

    int mid = s + (e-s)/2 ;

    for(int i=0 ;i<mid ;i++){
        cost += arr[mid]-arr[i] ;
    }

    for(int i=mid+1 ; i<n ;i++){
        cost += arr[i]-arr[mid] ;
    }

    cout << cost << endl ;

    return 0 ;
}