#include <bits/stdc++.h>
using namespace std ;

int main(){

    int n ;
    cin >> n ;
    vector<int>arr(n) ;
    for(int i=0 ;i<n ;i++){
        cin >> arr[i] ;
    }

    int odd = 0 ;
    int even = 0 ;
    int oddid = 0 ;
    int evenid = 0 ;

    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
            even++ ;
            evenid = i ;
        }else{
            odd++;
            oddid = i ;
        }
    }

    if(even > odd) {
        cout << oddid+1 << endl;
    }
    else {
        cout << evenid+1 << endl ;
    }

    return 0 ;
}