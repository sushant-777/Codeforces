#include <bits/stdc++.h>
using namespace std ;

int ans(vector<int>&arr , int n ,int x ){

if(arr[n-1] > x){
    return 0 ;
}

int i=0 ;
int j = n-1 ;

vector<int>ans ;

while(i<=j){
    if(arr[j]+arr[i] <= x){
        ans.push_back(arr[j]+arr[i]) ;
        i++ ;
        j-- ;
    }else{
        ans.push_back(arr[j]) ;
        j-- ;
    }
}
return ans.size() ;

}
int main(){
    int n , x;
    cin >> n >> x ;

    vector<int>arr(n);

    for(int i=0 ;i<n ;i++){
        cin >> arr[i] ;
    }

    sort(arr.begin(),arr.end()) ;

    cout << ans(arr,n,x) << endl ;
   

    return 0 ;
}




