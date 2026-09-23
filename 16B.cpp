#include <bits/stdc++.h>
using namespace std ;

bool cmp(vector<int>&a , vector<int>&b){
    return a[1] > b[1] ;
}

int main(){
    int n , m ;
    cin >> n >> m ;
    vector<vector<int>>arr(m,vector<int>(2)) ;

    for(int i=0 ;i<m ;i++){
        for(int j=0 ; j<2 ;j++){
            cin >> arr[i][j] ;
        }
    }

    sort(arr.begin(),arr.end(),cmp);

    int sum = 0 ;

    for(int i=0 ;i<m ;i++){
        if(arr[i][0] <= n){
            sum += arr[i][0] * arr[i][1] ;
            n = n-arr[i][0] ;
        }
        else{
            sum += n * arr[i][1] ;
            n = 0 ;
            break ;
        }
    }
    
    cout << sum << endl ;

    return 0 ;
}