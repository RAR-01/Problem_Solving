#include<bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while(T--) {

        string s;
        cin >> s;

        string ans = "";

        for(int i = s.length() - 1; i >= 0; i--) {
            ans += s[i];
        }

        cout << ans << endl;
    }

    return 0;
}