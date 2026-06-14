#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        
        bool flag = false;
        int count = 0;

        for (int i = s.length() - 1; i >= 0; i--) {

            if (!flag && s[i] != ' ') {
                flag = true;
            }

            if (flag && s[i] != ' ') {
                count++;
            }

            if (flag && s[i] == ' ') {
                return count;
            }
        }

        return count;
    }
};