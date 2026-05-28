#include<bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin >> s;

    for(int i = s.length() - 1; i > 0; i--){
        
        int digit = s[i] - '0';

        if(digit % 2 == 1){
            cout << s.substr(0, i + 1);
            return 0;
        }
    }

    cout << "0";

    return 0;
}