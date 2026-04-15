#include <bits/stdc++.h>
using namespace std ;

/*  -> TOP DOWN
int solve(vector<int>&arr , int n , vector<int>&dp){

    if(n == 0) return 0 ;

    if(dp[n] != -1) return dp[n] ;

    //int cost = INT_MAX ;
    int cost =  solve(arr,n-1,dp) +  abs(arr[n]-arr[n-1]) ;
    if(n > 1)
    cost = min(cost, solve(arr,n-2,dp) +  abs(arr[n]-arr[n-2])) ;

    dp[n] = cost ;
    return dp[n] ;
    
}

int main(){
    int n ;
    cin >> n ;

    vector<int>arr(n) ;
    for(int i=0 ;i<n ;i++){
        cin >> arr[i] ;
    }

    vector<int>dp(n+1 ,-1) ;
    int ans = solve(arr,n-1,dp) ;
    cout << ans << endl ;
    return 0 ;
}


*/

// BOTTOM UP 

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> dp(n, 0);
    dp[0] = 0; 
    if (n > 1) {
        dp[1] = abs(arr[1] - arr[0]);
    }
    for (int i = 2; i < n; i++) {
        int jump1 = dp[i-1] + abs(arr[i] - arr[i-1]);
        int jump2 = dp[i-2] + abs(arr[i] - arr[i-2]);
        dp[i] = min(jump1, jump2);
    }

    cout << dp[n-1] << endl;
    return 0;
}
