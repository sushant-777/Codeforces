#include <bits/stdc++.h>
using namespace std ;

vector<int>findmax(vector<int>&arr){

    vector<pair<int,int>>tmp(arr.size()) ;

    for(int i=0 ;i<arr.size();i++){
        tmp[i].first = arr[i] ;
        tmp[i].second = i ;
    }

    sort(tmp.rbegin(),tmp.rend()) ;

    vector<int>ans(3) ;
    for(int i=0 ;i<3 ;i++) ans[i] = tmp[i].second ;
    return ans ;
}

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;

        vector<int>d1(n) ;
        vector<int>d2(n) ;
        vector<int>d3(n) ;

        for(int i=0 ;i<n ;i++){
            cin >> d1[i] ;
        }
        for(int i=0 ;i<n ;i++){
            cin >> d2[i] ;
        }
        for(int i=0 ;i<n ;i++){
            cin >> d3[i] ;
        }

        vector<int>maxa = findmax(d1) ;
        vector<int>maxb = findmax(d2) ;
        vector<int>maxc = findmax(d3) ;


        int ans =0 ;
        for(int i=0 ;i<3 ;i++){
            for(int j=0 ;j<3 ;j++){
                for(int k=0;k<3 ;k++){
                    int x = maxa[i] ;
                    int y = maxb[j] ;
                    int z = maxc[k] ;

                    if((x == y)|| (x==z) || (y==z) ) continue; 
                    ans = max(ans , d1[x]+d2[y]+d3[z]) ;

                }
            }
        }
        cout << ans << endl; 

    }

    return 0 ;
}