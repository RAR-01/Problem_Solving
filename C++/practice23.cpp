#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector <bool> seen(26, false);

    string ans = "";

    for(char c : s){
        if(!seen[c-'a']){
            ans += c;
            seen[c-'a'] = true;
        }
    }

    cout << ans;
    return 0;
}