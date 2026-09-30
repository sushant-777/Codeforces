#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;

        bool flag = true;
        int cnt0 = 0 ;
        int cnt1 = 0 ;

        for(int i = 0 ; i < n ; i++){
            if(s[i] == '0') cnt0++ ;
            else cnt1++ ;
        }

        if(abs(cnt0-cnt1) > 2){
            cout << -1 << endl ;
            flag = false;
        }

        if(flag == true){
        int del0 = 0 ;
        int del1 = 0 ;
        for(int i=1 ;i<n ;i++){
            if(s[i]==s[i-1]){
                if(s[i] == '0') del0++;
                else
                del1++;
            }
        }

        
        if(abs(del0 - del1) <=1){
            cout << del0 + del1 << endl ;
        }else{
            cout << max(del0,del1)+max(del0,del1)-1 << endl ;
        }
    }

    }
    return 0 ;
}