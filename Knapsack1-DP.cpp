#include <bits/stdc++.h>
using namespace std ;

long long solve(vector<int>&wt , vector<int>&val , int idx , int capacity ,vector<vector<long long>>&dp){
    if(idx < 0 || capacity == 0){
        return 0 ;
    }

    if(dp[idx][capacity] != -1) return dp[idx][capacity] ;

    long long include = 0 ;
    if(wt[idx] <= capacity){
        include  = val[idx] + solve(wt,val,idx-1,capacity-wt[idx],dp) ;
    }

    long long exclude = solve(wt,val,idx-1,capacity,dp) ;

    dp[idx][capacity] = max(include,exclude) ;
    return dp[idx][capacity] ;

}

int main(){
    int n , w ;
    cin >> n >> w ;

    vector<int>wt(n) ;
    vector<int>val(n) ;

    for(int i=0 ;i< n ;i++){
        cin >> wt[i] >> val[i] ;
    }

   vector<vector<long long>>dp(n,vector<long long>(w+1,-1));

    long long ans = solve(wt,val,n-1,w,dp) ;
    cout << ans << endl ;
    return 0 ;
}


