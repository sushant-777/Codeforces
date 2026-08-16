#include<bits/stdc++.h>
using namespace std ;

 string Palindrome(string s) {
        vector<int> freq(26, 0);
        for(char c : s) freq[c - 'A']++;

        int oddCount = 0;
        char oddChar = 0;
        for(int i = 0; i < 26; i++) {
            if(freq[i] % 2 != 0) {
                oddCount++;
                oddChar = 'A' + i;
            }
        }

       if(oddCount > 1) return "-1";

        string half = "";
        for(int i = 0; i < 26; i++) {
            half.append(freq[i] / 2, 'A' + i);
        }

        string ans = half;
        if(oddCount == 1) ans.push_back(oddChar);
        reverse(half.begin(), half.end());
        ans += half;

        return ans;
    }

int main(){
    string s ;
    cin >> s ; 

    string sol = Palindrome(s) ;
    if(sol == "-1"){
        cout << "NO SOLUTION" << endl ;
    }else{
        cout << sol << endl ;
    }
    

    return 0 ;
}