#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        unordered_map<char, int> freq;
        int count = 0;

        for(char ch : text){
            if(ch == 'b' || ch == 'a' || ch == 'l' || ch == 'o' || ch == 'n'){
                freq[ch]++;
            }
        }

        while(freq['b'] >= 1 && freq['a'] >= 1 && freq['l'] >= 2 &&
              freq['o'] >= 2 && freq['n'] >= 1){
                freq['b']--;
                freq['a']--;
                freq['l']-=2;
                freq['o']-=2;
                freq['n']--;
                count++;
            }
        return count;
    }
};