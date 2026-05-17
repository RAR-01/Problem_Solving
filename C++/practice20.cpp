#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string num = "";
    int sum = 0;

    for(char c : s){
        if(isdigit(c)){
            num += c;
        }
        else {
            if(!num.empty()){
                sum += stoll(num);
                num = "";
            }
        }
    }
    if(!num.empty()){
        sum += stoll(num);
    }
    cout << sum;
    return 0;
}