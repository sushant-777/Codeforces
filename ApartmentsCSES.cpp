#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , m , k ;
    cin >> n >> m >> k ;

    vector<int>applicants(n);
    vector<int>apartments(m);

    for(int i=0 ;i<n ;i++){
        cin >> applicants[i] ;
    }
    for(int i=0 ;i<m ;i++){
        cin >> apartments[i] ;
    }


    int cnt = 0 ;

    /*
    for(int i=0 ;i<n ;i++){
        for(int j=0 ;j<m ;j++){
            if(abs(applicants[i] - apartments[j]) <= k){
                cnt++ ;
                apartments[j] = INT_MAX ;
                break ;
            }
        }
    }
    */
   
    sort(applicants.begin(),applicants.end()) ;
    sort(apartments.begin(),apartments.end()) ;

    int i=0;
    int j=0 ;

    while(i<n && j<m){
        if(applicants[i] > apartments[j]+k){
            j++ ;
        }
        else if(applicants[i] < apartments[j]-k){
            i++ ;
        }
        else{
            cnt++ ;
            i++ ;
            j++ ;
        }

    }

    if(n ==0 || m==0 ){
        cout << 0 << endl ;
    }
    else
        cout << cnt << endl ;
    return 0 ;

}