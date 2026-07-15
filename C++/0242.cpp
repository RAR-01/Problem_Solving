#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n = s.length();
        int m = t.length();
        
        if(n != m)
        return false;

        for(int i = 0; i < n; i++){
            bool flag = false;
            for(int j = 0; j < m; j++){
                if(s[i] == t[j]){
                    flag = true;
                    t[j] = '#';
                    break;
                }
            }
            if(!flag){
                return false;
            }
        }
        return true;
    }
};

//
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char, int> freq1;
        unordered_map<char, int> freq2;

        for(char c : s){
            freq1[c]++;
        }

        for(char c : t){
            freq2[c]++;
        }

        return freq1 == freq2;
    }
};