#include<bits/stdc++.h>
using namespace std;


int main() {

    string s;
    cin >> s;

    int n = s.length();

    int last = s[n -1] - '0';

    if( last <= 5){
        s[n-1] = '0';
    }

    else {
        s[n-1] = '0';

        int i = n - 2;

        while(i >= 0){
            if(s[i] < '9'){
                s[i]++;
                break;
            }
            else {
                s[i] = '0';
                i--;
            }
        }
        if (i < 0){
            s = "1" + s;
        }
    }
    cout << s;
    return 0;

}