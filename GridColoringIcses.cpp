#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n , m ;
    cin >> n >> m ;

    vector<vector<char>>grid(n,vector<char>(m)) ;
    for(int i=0 ;i<n ;i++){
        for(int j=0 ;j<m ;j++){
            cin >> grid[i][j] ;
        }
    }


   for(int i=0 ;i<n ;i++){
        for(int j=0 ;j<m ;j++){
           set<char>na;
           na.insert(grid[i][j]) ;
           if(i-1>=0)
           na.insert(grid[i-1][j]) ;
           if(j-1>=0)
           na.insert(grid[i][j-1]) ;
           
           for(int k=0 ; k< 4 ;k++){
            char ch = 'A' + k ;

            if(na.find(ch) == na.end() ){
                grid[i][j] = ch ;
                cout << ch ;
                break ;
            }
           }
        }
        cout << endl ;
    }


    return 0 ;
}