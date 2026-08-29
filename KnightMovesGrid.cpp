#include <bits/stdc++.h>
using namespace std ;

vector<pair<int,int>>offsets = {{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}} ;

bool isValid(int i , int j ,int n){
    return i>= 0 && i < n && j >= 0 && j < n ;
}

void bfs(vector<vector<int>>&grid , pair<int,int>start){
    int n = grid.size() ;

    queue<pair<int,int>> q ;
    q.push(start) ;
    int u = start.first ;
    int v = start.second ;

    grid[u][v] = 0 ;

    while(! q.empty()){

        u = q.front().first ;
        v = q.front().second ;

        q.pop() ;

        for(auto p : offsets){ 
            int i = u + p.first ;
            int j = v + p.second ;

            if(isValid(i,j,n) && grid[i][j] == -1){
                grid[i][j] = grid[u][v] + 1 ;
                q.push({i,j}) ;
            }
        }
    }
}

int main(){

    int n ;
    cin >> n ;

    vector<vector<int>>grid(n,vector<int>(n,-1)) ;

    bfs(grid, {0,0}) ;

    for(int i=0 ;i<n ;i++){
        for(int j=0 ;j<n;j++){
            cout << grid[i][j] << " " ;
        }
        cout << endl ;
    }

    return 0 ;
}