#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;

        string s ;
        cin >> s ;

        stack<int>st ;
        vector<int>res ;
        for(int i=0;i<n ;i++){
            char ch = s[i] ;
            if(ch == '1'){
                st.push(i+1) ;
            }else if(ch == '2'){
                if(!st.empty()){
                    st.pop() ;
                    res.push_back(i+1) ;
                }
            }
        }
        while(!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }
        sort(res.begin(), res.end());
        
        cout << res.size() << endl;

        for(auto x:res) cout << x << " " ;
        cout << endl;
    }
    
    return 0 ;
}