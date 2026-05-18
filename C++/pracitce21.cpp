#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    getline(cin, s);

    stringstream ss(s);

    string word;
    long long maxi = -1;
    
    while(ss >> word){
        bool isNumber = true;

        for(char c : word){
            if(!isdigit(c)){
                isNumber = false;
                break;
            }
        }

        if(isNumber){

            bool has9 = false;

            for(char c : word){
                if(c == '9'){
                    has9 = true;
                    break;
                }
            }

            if(!has9){
                maxi = max(maxi, stoll(word));
            }
        }
    }
    cout << maxi;
    return 0;
}