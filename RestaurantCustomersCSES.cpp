#include<bits/stdc++.h>
using namespace std;    


int main(){

    int n ;
    cin >> n ;

    vector<pair<int,int>>time ;

    for(int i=0 ;i<n ;i++){
        int a,b ;
        cin >> a >> b ;
        time.push_back({a,1}) ;
        time.push_back({b,-1}) ;
    }


    sort(time.begin(),time.end());

    int cnt = 0;
    int maxi = 0 ;

    for(auto &i : time){
        cnt += i.second ;
        maxi = max(cnt,maxi) ;
    }

    

    cout << maxi << endl ;

    return 0;
}