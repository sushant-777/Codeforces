#include <bits/stdc++.h>
using namespace std ;

int main(){

    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int>arr(n) ;
        for(int i=0 ;i<n ;i++){
            cin >> arr[i] ;
        }

        unordered_map<int,int>mp ;
        for(int i=0 ;i<n ;i++){
            mp[arr[i]]++ ;
        }

        vector<int>temp ;
        for(auto &p : mp){
            temp.push_back(p.first) ;
        }
        sort(temp.rbegin(),temp.rend()) ;

        int maxi = 0 ;
        for(auto &p : mp){
            maxi = max(maxi, p.second) ;
        }

        vector<int>ans ;
        for(int i=1 ;i<=maxi ;i++){
            for(int a : temp){
                if(mp[a] >= i){
                    ans.push_back(a) ;
                }
            }
        }

        for(int i=0 ;i<n ;i++){
            cout <<ans[i] << " " ;
        }
        cout << endl ;


    }
    return 0 ;
}