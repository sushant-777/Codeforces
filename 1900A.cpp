#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s ;
        bool flag = false;

        int cnt = 0;
        for (int i = 0; i < n; i++){
            if (i>=2 && s[i] == '.' && s[i - 2] == '.' && s[i -1] == '.'){
                if (flag == false){
                    cout << "2" << endl;
                    flag = true;
                }
            }

            else{
                if (s[i] == '.'){
                    cnt++;
                }
            }
        }

        if (flag == false)
            cout << cnt << endl;
    }

    return 0;
}
