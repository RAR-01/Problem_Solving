#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    long long count = 0;

    for (int i = 0; i < s.length(); i++){
        int digit = s[i] - '0';
        
        if( digit % 2 == 0) {
            count += (i+1);
        }
    }

    cout << count;
}