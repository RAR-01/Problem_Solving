#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        
        string ans = "";
        int n = words.size();

        for (int i = 0; i < n; i++) {
            int sum = 0;

            for (char ch : words[i]) {
                sum += weights[ch - 'a'];
            }

            sum %= 26;
            ans += ('z' - sum);
        }

        return ans;
    }
};