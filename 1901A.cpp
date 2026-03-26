#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ,x ;
        cin >> n >> x ;

        vector<int>arr(n) ;
        for(int i=0 ;i<n ;i++){
            cin >> arr[i] ;
        }

        int first = arr[0] - 0 ;
        int last =  2*(x - arr[n-1])  ;
        int ans = max(first,last) ;
        
        int maxi = INT_MIN;
        for(int i = 1; i < n; i++) {
            int res = (arr[i] - arr[i - 1]);
            maxi = max(maxi,res);
        }


        cout << max(maxi , ans) << endl ;
        

    }
    return 0 ; 
}
