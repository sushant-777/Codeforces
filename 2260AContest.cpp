#include <bits/stdc++.h>
using namespace std;

int ways(vector<int>&arr , int n ,int cnt0 , int cnt1){

    if(cnt0 < 2) return -1 ;

    if(n < 2) return -1 ;

    if(n == 2 && cnt0 != 2) return -1 ;

    if(n==2 && cnt0 == 2) return 0 ;

    if(arr[0] == 0 && arr[n-1] == 0) return 0;

    if(arr[0] == 0 && arr[n-1] == 1) return 1 ;

    if(arr[0] == 1 && arr[n-1] == 0) return 1 ;

    else  return 2 ;
     

}

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int>arr(n) ;
        for(int i=0 ;i<n ;i++){
            cin >> arr[i] ;
        }

        int cnt0 = 0 ;
        int cnt1 = 0 ;

        for(int i=0 ;i<n ;i++){
            if(arr[i] == 0) cnt0++ ;
            else cnt1++ ;
        }

        int ans = ways(arr,n,cnt0,cnt1)  ;
        cout << ans << endl ;
    }

    return 0 ;
}