#include <bits/stdc++.h>
using namespace std ;
 
int main(){
    
    int n;
    cin >> n ;
    
    if(n == 1) cout << "1" << endl ;
    else if(n>1 && n < 4) cout << "NO SOLUTION" << endl ;
    
    else if (n == 4) cout << "2 4 1 3" << endl ;
    else {
        
        int a = 1 ;
        int b = 2 ;
        int i = 0;
        int j ;
        if(n % 2== 1){
         j = n/2+1;
        }
        else {
        j = n/2 ;
        }
        vector<int>arr(n,-1) ;
        
        while( i < n && a <= n){
            arr[i] = a ;
            a = a+2;
            i++ ;
        }
        
        while( j<n && b <= n){
            arr[j] = b ;
            b=b+2;
            j++;
        }
        
        for(int i=0;i<n;i++){
            cout << arr[i] << " " ;
        }  
        
        
    } 
 
    return 0;
}