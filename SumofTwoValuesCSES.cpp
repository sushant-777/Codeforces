#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n , x ;
    cin >> n >> x ;

    vector<int>arr(n) ;
    multimap<int,int>val ;
    for(int i=0 ;i<n ;i++){
        cin >> arr[i] ;
        val.insert({arr[i], i+1}) ;
    }

    sort(arr.begin(),arr.end()) ;
    bool flag = false ;

    int i=0 ; 
    int j=n-1 ;
    while(i<j){
        if(arr[i]+arr[j] == x){
            auto it1 = val.lower_bound(arr[i]);
            auto it2 = val.lower_bound(arr[j]);
            if(arr[i] == arr[j]) it2 = next(it1); 
            cout << it1->second << " " << it2->second << endl;
            flag = true ;
            break;
        }
        else if(arr[i]+arr[j]<x){
            i++ ;
        }else{
            j-- ;
        }
    }

    if(flag==false){
        cout << "IMPOSSIBLE"<< endl ;
    }



    return 0 ;
}


/*

hume order maintain rkhna hai  -> index values ke sath store kr lo 

unordered_map<int,int>val ;
        arr[i] ,i ;

sort(arr) ;

arr[i]+arr[j] == x ;

now find in map the val corresponding to arr[i]


*/