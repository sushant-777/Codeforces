#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n , m ;
    cin >> n >> m ;
    bool flag = true ;

    vector<string> arr(n) ;
    for(int i=0 ;i<n ;i++){
        cin >> arr[i] ;
    }

    for(int i=0 ;i<n ;i++){
        for(int j=0 ;j<m ;j++){
            if(i+1 < n && arr[i][j] == arr[i+1][j]){
                flag = false ;
                break; ;
            }
           
            if( j+1 < m && arr[i][j] != arr[i][j+1]){
                flag = false ;
                break ;
            
            }
            if(flag == false) break ;
        }
    }

    if(flag == false){
        cout <<  "NO" << endl ;
    }else{
        cout << "YES" << endl ;
    }


    return 0 ;
}