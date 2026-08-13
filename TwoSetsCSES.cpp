#include <bits/stdc++.h>
using namespace std ;

void print(long long sum,int n){
    long long target = sum/2 ;
    set<int>s1 ;
    set<int>s2 ;
    for(long long i= n ;i>= 1 ;i--){
        if(i <= target){
            s1.insert(i) ;
            target = target-i ;
        }else{
            s2.insert(i) ;
        }
    }

    cout << s1.size() << endl ;
    for(auto i:s1){
        cout << i << " " ;
    }
    cout << endl ;
    cout << s2.size() << endl ;
    for(auto i:s2){
        cout << i << " " ;
    }

}
int main(){
    int n ;
    cin >>n ;

    long long sum = 1LL* n*(n+1)/2 ;
    

    if(sum % 2 == 0){
        cout << "YES" << endl ;
        print(sum,n) ;
    }
    else{
        cout << "NO" << endl ;
    }
    return 0 ;
}