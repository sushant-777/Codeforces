#include <bits/stdc++.h>
using namespace std ;
int main() {

    string s ;
    cin >> s ;

    sort(s.begin() , s.end()) ;
    int cnt = 1 ;

    for(int i=1 ;i<s.size() ; i++){
        if(s[i] != s[i-1]){
            cnt++ ;
        }
    }

    if(cnt & 1){
        cout << "IGNORE HIM!"  << endl;
    }else{
        cout << "CHAT WITH HER!" << endl ;
    }



    return  0 ;
}