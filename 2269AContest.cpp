#include <bits/stdc++.h>
using namespace std;

long long solve(int n, int k){
    if(k == 1){
        return pow(2, n); 
    }
    return 2 + solve(n - 1, k - 1); 
}

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n , k ;
        cin >> n >> k ;
    
         cout << solve(n, k) << "\n";
    }
    return 0;
}