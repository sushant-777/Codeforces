#include <bits/stdc++.h>
using namespace std;

bool ispossible(int n , int a , int b){

    if(a+b > n){
        return false ;
    }

    if(a != 0 && b == 0){
        return false ;
    }
    if(b != 0 && a == 0){
        return false ;
    }

    return true ;
}


int main()
{
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n ;
        int a ;
        cin >> a ;
        int b ;
        cin >> b ;

        bool check = ispossible(n,a,b) ;

        if(!check){
            cout << "NO" << endl; 
        }
        else{
            cout << "YES" << endl ;

            int tie = n - a - b ;
            int m = a + b ; 

            vector<int> n1(n);
            vector<int> n2(n);

            for(int i = 0 ; i < n ; i++){
                n1[i] = i + 1 ;
            }

            for(int i = 0 ; i < tie ; i++){
                n2[i] = n1[i] ;
            }

            for(int k = 0 ; k < m ; k++){
                n2[tie + k] = n1[tie + (k + a) % m] ;
            }

            for(int i = 0 ; i < n ; i++){
                cout << n1[i] << " " ;
            }
            cout << "\n" ;

            for(int i = 0 ; i < n ; i++){
                cout << n2[i] << " " ;
            }
            cout << endl ;
        }
    }

    return 0;
}