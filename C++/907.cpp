#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        
        long long sum = 0;
        int n = arr.size();
        const int MOD = 1e9 + 7;

        for (int i = 0; i < n; i++){
            
            int minimum = arr[i];
            for(int j = i; j < n; j++){
                minimum = min(minimum, arr[j]);
                sum += minimum;
            }
        }

        return sum % MOD;
    }
};