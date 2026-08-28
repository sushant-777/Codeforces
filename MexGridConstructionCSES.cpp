/*
#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    vector<vector<int>>arr(n,vector<int>(n)) ;
   
    for(int i=0 ;i<n ;i++){
        for(int j=0 ;j<n ;j++){
            arr[i][j] = (i ^ j) ;
            cout << arr[i][j] << " " ;
        }
        cout << endl ;
    }
  
    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    
   
    for(int i=0 ;i<n ;i++){
        for(int j=0 ;j<n ;j++){
            cout << (i ^ j )<< " ";
        }
        cout << endl ;
    }
  
    return 0;
}

