#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int numValue(char c){
        
        if(c == 'I') return 1;
        if(c == 'V') return 5;
        if(c == 'X') return 10;
        if(c == 'L') return 50;
        if(c == 'C') return 100;
        if(c == 'D') return 500;
        return 1000;

    }

    int romanToInt(string s) {
        
        int sum = 0;


        for(int i = 0; i < s.length(); i++){
            
            int current = numValue(s[i]);
            if(i < s.length() - 1 && current < numValue(s[i + 1])){
                sum -= current;
            }

            else{
                sum += current;
            }
        }
        return sum;
    }
};