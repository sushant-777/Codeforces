#include <bits/stdc++.h>
using namespace std ;

bool check(vector<int>&arr ,int k ,int n){

        bool flag = true ;
        for(int i=0 ;i<n-1 ;i++){
            if(arr[i] > arr[i+1]) {
                flag = false ;
                break ;
            }
        }
        if(flag == true) return true ;

        if(k == 1) return false ;

        return true ;
        
}

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n , k ;
        cin >>  n >> k ; 
        vector<int>arr(n) ;
        for(int i=0 ;i<n ;i++) cin >> arr[i] ;

        bool res = check(arr,k,n) ;
        if(res){
            cout << "YES" << endl ;
        }else {
            cout << "No" << endl ;
        }

    }
    return 0 ;
}