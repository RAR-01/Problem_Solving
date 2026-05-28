#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if(s1.length() != s2.length()){
        cout << 0;
        return 0;
    }

    unordered_map<char, char> mp1;
    unordered_map<char, char> mp2;

    for(int i = 0; i < s1.length(); i++){
        char c1 = s1[i];
        char c2 = s2[i];

        if(mp1.count(c1)){
            if(mp1[c1] != c2){
                cout << 0;
                return 0;
            }
        }

        else {
            if(mp2.count(c2)){
                cout << 0;
                return 0;
            }

            mp1[c1] = c2;
            mp2[c2] = c1;
        }
    }
    cout << 1;
}