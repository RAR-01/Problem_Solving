#include<bits/stdc++.h>
using namespace std;

int main () {
    string s1, s2;
    cin >> s1 >> s2;

    string ans = "";
    int i = 0, j = 0;
    while(i < s1.length() && j < s2.length()>0){
        ans+=s1[i];
        ans+=s2[j];

        i++;
        j++;
    }
    while(i < s1.length()){
        ans += s1[i];
        i++;
    }
    while(j < s2.length()){
        ans+= s2[j];
        j++;
    }

    cout << ans;
    return 0;
    
}