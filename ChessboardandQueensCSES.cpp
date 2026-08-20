#include<bits/stdc++.h>
using namespace std ;

bool issafe(vector<string>board,int row,int col){
    if(board[row][col] == '*'){
        return false ;
    }

    int i = row -1 , j = col -1 ;
    while(i>= 0 && j >= 0){
        if (board[i][j] == 'q') return false ;
        i-- ;
        j-- ;
    }

    j = col -1 ;
    i = row ;
    while(j >= 0){
        if (board[i][j] == 'q'){
            return false ;
        }
        j-- ;
    }

    i = row+1 ;
    j = col -1 ;

    while( i< 8 && j >= 0) {
         if (board[i][j] == 'q') return false ;
         i++ ;
         j--  ;
    }

    return true ;

}

void fns(vector<string>&board,int col,int &cnt){
    if(col == 8){
        cnt++ ;
        return ;
    }

    for(int row=0 ;row<8 ;row++){
        if(issafe(board,row,col)){

            board[row][col] = 'q' ;
            fns(board,col+1,cnt);

            board[row][col] = '.' ;
        }    
        
    }

}


int main(){
    
    vector<string>board(8) ;

    for(int i=0 ;i<8 ;i++){
        cin >> board[i] ;
    }

    int cnt = 0;
    fns(board,0,cnt) ; 

    cout << cnt << endl;


    return 0 ;
}