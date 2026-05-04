#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    cin >> s;

    if (s.empty() || s.size() % 2 == 0){
        cout << -1;
        return 0;
    }

    if (s[0] != '0' && s[0] != '1'){
        cout << -1;
        return 0;
    }

    int result = s[0] - '0';

    for (int i = 1; i < s.size(); i += 2){
        char op = s[i];
        char nextChar = s[i + 1];

        if (op != 'A' && op != 'B' && op != 'C'){
            cout << -1;
            return 0;
        }

        if (nextChar != '0' && nextChar != '1'){
            cout << -1;
            return 0;
        }

        int next = nextChar - '0';

        if (op == 'A') result &= next;
        else if (op == 'B') result |= next;
        else result ^= next;
    }
    cout << result;
    return 0;
}