#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,int>&a,const pair<int,int>&b){
    return a.second < b.second ;
}

int main(){
    int n ;
    cin >> n ;

    vector<pair<int,int>>time ;

    for(int i=0 ;i<n ;i++){
        int a , b ;
        cin >> a >> b ;
        pair<int,int>p = make_pair(a,b) ;
        time.push_back(p) ;
    }

    sort(time.begin(),time.end(),cmp) ; 

    int cnt = 1 ;
    int lastseen = time[0].second ;
    for(int i=1 ;i<n ;i++){
        if(time[i].first >= lastseen){
            cnt++ ;
            lastseen = time[i].second ;
        }
    }


    cout << cnt << endl ;


    return 0 ;
}