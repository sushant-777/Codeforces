#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ,k;
        cin >> n >> k ;
        
        if(k < n || k > 2*n-1){
            cout << "-1" << endl ;
        }
        else{

        int s = 2*n - k;
        vector<vector<int>> A(n+1, vector<int>(n+1, 0)); 
        
        int val = 1;
        for (int i = 1; i <= s; i++) 
            A[i][i] = val++;        

        for (int i = s+1; i <= n; i++)
             A[i][1] = val++;        

        for (int j = s+1; j <= n; j++)
             A[1][j] = val++;             

        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                if (A[i][j] == 0) A[i][j] = val++;     
            }
        }            
        
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++)
                cout << A[i][j] << " \n"[j == n];
        }
        
    }
}

    return 0;
}