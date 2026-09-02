#include <bits/stdc++.h>
using namespace std;    

bool is_possible(map<char,int>& mp , char ch){
    
    char mode = ch ;
    int total_left = 0 ;
    for(auto it : mp){
        mode = it.first ;
        total_left += it.second ;
    }

    return (mp[mode] <= (total_left + 1)/2) && (mp[ch] <= (total_left )/2) ;

}

int main(){
    string s;
    cin >> s;

    int n = s.size();

    map<char,int>mp;
    for(auto ch : s){
        mp[ch]++;
    }

    string ans = "" ;
    char last = '\0' ;

    for(int i=0 ;i<n ;i++){

        for(int i=0 ;i<26 ;i++){
            char ch = 'A' + i ;
            if(mp[ch] == 0 || ch ==last) continue; 

            mp[ch]-- ;
            if (is_possible(mp,ch)){
                ans.push_back(ch) ;
                last = ch ;
                break;
            }else{
                mp[ch]++ ;
            }
        }
    }

    if(ans.size() == n){
        cout << ans << endl ;
    }else{
        cout << "-1" << endl ;
    }



    return 0 ;
}