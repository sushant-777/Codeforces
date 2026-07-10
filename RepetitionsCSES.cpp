#include <bits/stdc++.h>
using namespace std ;

int main(){
 
    string s ;
    cin >> s ;
    
    int ans = 1 ;
    int maxi = 1 ;

    for(int i= 1 ;i<s.size();i++){
        
        if(s[i] == s[i-1]){
            ans ++ ;
        }
        else{
            ans = 1 ;
        }
        maxi = max(ans ,maxi) ;
    }

    cout << maxi << endl ;
    
    return 0 ;
}