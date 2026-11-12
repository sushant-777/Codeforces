#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;

    while(t--){
        int n ;
        cin >>  n ;
        vector<int>arr(n) ;
        for(int i=0 ;i<n ;i++){
            cin >> arr[i] ;
        }

        sort(arr.begin() , arr.end()) ;
        vector<int>A1 , A2 ;

        for(int i=0 ;i<n ;i++){
            if(i == 0 || arr[i] != arr[i-1]){
                A1.push_back(arr[i]) ;
            }
            else{
                A2.push_back(arr[i]) ;
            }
        }

        reverse(A2.begin(),A2.end()) ;
        int cnt = A1.size() ;

        for(int i=0 ;i<A2.size() ; i++){
            if(i == 0 || A2[i] != A2[i-1]) cnt++ ;
        }

        cout << cnt << endl ;
        for(auto a : A1) cout << a << " " ;
        for(auto a : A2) cout << a << " " ;
        cout << endl ;
    }
    return 0 ;
}