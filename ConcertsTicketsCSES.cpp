#include<bits/stdc++.h>
using namespace std ;

int main(){

    int n , m ;
    cin >>n >> m ;

    
    vector<int>person(m) ;

    multiset<int>st ;
    for(int i=0 ;i<n ;i++){
        int x ;
        cin >> x ;
        st.insert(x) ;
    }

    for(int i = 0 ; i < m ; i++){
        cin >> person[i] ;
    }

    for(int i=0 ;i<m ;i++){
        auto val = st.upper_bound(person[i]) ;
        if(val == st.begin()) {
            cout << "-1" << endl;
            continue ;
        }else{
            val-- ;
            cout << *val << endl ;
            st.erase(val) ;
        }
    }



    return 0 ;
}