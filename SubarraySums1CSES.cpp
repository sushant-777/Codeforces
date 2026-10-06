#include <bits/stdc++.h>
using namespace std ;

int main(){

    int n,x ;
    cin >> n >> x ;

    vector<int>arr(n) ;
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }

    /*    BRUTE FORCE -> O(n^2)
    int cnt = 0 ;
    for(int i=0 ;i<n ;i++){
        int sum = 0 ;
        for(int j=i ;j<n ;j++){
            sum += arr[j] ;
            if(sum == x){
                cnt++ ;
            }
        }
    }
    cout << cnt << endl ;
    */


    int cnt = 0 ;
    long long prefix = 0 ;

    unordered_map<long long,int>mp ;
    mp[0] = 1 ;

    for(int i=0 ;i<n ;i++){
        prefix += arr[i] ;
        long long remove = prefix - x ;
        cnt += mp[remove] ;
        mp[prefix] += 1 ;
    }

    cout << cnt << endl ;

    return 0 ;
}