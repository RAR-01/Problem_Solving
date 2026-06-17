#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char processStr(string s, long long k) {
        
        long long len = 0;

        for(char ch : s){
            if(ch >= 'a' && ch <= 'z'){
                len++;
            }
            else if (ch == '*') {
                if(len > 0) len--;
            }
            else if (ch == '#') {
                len *= 2;
            }
        }

        if(k >= len){
            return '.';
        }

        for(int i = s.length() - 1; i >= 0; i--){
            
            char ch = s[i];

            if (ch == '%'){
                k = len - 1 -k;
            }

            else if (ch == '#'){

                len /= 2;

                if(k >= len){
                    k -= len;
                }
            }
            else if (ch == '*'){
                
                len++;
            }

            else {
                if(k == len - 1){
                    return ch;
                }

                len--;
            }
        }

        return '.';
    }
};