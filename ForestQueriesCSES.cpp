#include <bits/stdc++.h>  
using namespace std ;

int main(){
    int n, q ;
    cin >> n >>  q;
    vector<vector<char>>arr(n+1,vector<char>(n+1));
    vector<vector<int>>prefix(n+1,vector<int>(n+1));


    for(int i=1;i<=n ;i++){
        for(int j=1 ;j<=n ;j++){
            cin >>arr[i][j] ;
            prefix[i][j] += (arr[i][j] == '*') ;
        }
    }


for(int i=1 ;i<= n ;i++){
    for(int j=1 ;j<= n ;j++){

       
        prefix[i][j] = prefix[i][j] ;
       

       if(j > 1){
        prefix[i][j] += prefix[i][j-1] ;
       }
       if(i > 1){
        prefix[i][j] += prefix[i-1][j] ;
       }
       if(i > 1 && j>1){
        prefix[i][j] -= prefix[i-1][j-1] ;
       }
       
    }
}
   
    while(q--){
        int r1,c1 ;
        cin >> r1 >> c1 ;
        int r2,c2 ;
        cin >> r2 >> c2 ;

        int ans = prefix[r2][c2] ;

        if(r1 > 1){
            ans -= prefix[r1-1][c2] ;
        }
        if(c1 > 1){
            ans -= prefix[r2][c1-1] ;
        }
        if(r1 > 1 && c1 > 1){
            ans += prefix[r1-1][c1-1] ;
        }
        // ans = prefix[r2][c2] - prefix[r1-1][c2] - prefix[r2][c1-1] + prefix[r1-1][c1-1] ;   conditions to avoid out of bound indexes
        cout << ans << endl ; 
    
}


    return 0 ;
}