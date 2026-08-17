#include<bits/stdc++.h>
using namespace std ;

vector<string> generate_gc(int n){

    if(n==1 ) {
        return {"0" ,"1"} ;
    }

    vector<string>gcode_n_1 = generate_gc(n-1) ;
    
    vector<string>mirror ;
    for(int i = gcode_n_1.size() -1; i>= 0 ;i--){
        mirror.push_back(gcode_n_1[i]);
    }

    vector<string>new_code; 
    for(int i=0 ;i<gcode_n_1.size() ;i++){
        new_code.push_back("0"+gcode_n_1[i]) ;
    }
    for(int i=0 ;i<gcode_n_1.size() ;i++){
        new_code.push_back("1"+mirror[i]) ;
    }

    return new_code ;

}


int main(){

    int n ;
    cin >> n ;
    vector<string>gray_codes ;
    gray_codes = generate_gc(n) ;
    for(auto gc : gray_codes){
        cout << gc << endl ;
    }

    return 0 ;
}