#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1 , 1 ,-1 ,1} ;
int dy[4] = {-1 , -1, 1,1} ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long xk, yk;
        cin >> xk >> yk;
        long long xq, yq;
        cin >> xq >> yq;

        set<pair<int,int>>kingmove ;
        set<pair<int,int>>queenmove ;

        for(int i=0 ;i<4 ;i++){
            kingmove.insert({xk + dx[i]*a , yk+dy[i]*b}) ;
            kingmove.insert({xk + dx[i]*b , yk+dy[i]*a}) ;

            queenmove.insert({xq + dx[i]*a , yq+dy[i]*b}) ;
            queenmove.insert({xq + dx[i]*b , yq+dy[i]*a}) ;
        }

        int cnt = 0 ;
        for(auto j : kingmove){
            if(queenmove.find(j) != queenmove.end()) cnt++ ;
        }

        cout << cnt << endl ;

    }
    return 0;
}