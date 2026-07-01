#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        int n = word.length();

        for (int i = 0; i < patterns.size(); i++) {
            int m = patterns[i].length();

            if (m > n)
                continue;

            for (int start = 0; start <= n - m; start++) {
                bool match = true;

                for (int j = 0; j < m; j++) {
                    if (patterns[i][j] != word[start + j]) {
                        match = false;
                        break;
                    }
                }

                if (match) {
                    count++;
                    break;
                }
            }
        }

        return count;
    }
};