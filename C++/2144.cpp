#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        
        int ans = 0;
        int n = cost.size();
        
        if (n == 1) return cost[0];

        if (n == 2) {
            return cost[0] + cost[1];
        }

        sort(cost.begin(), cost.end(), greater<int>());
        
        for (int i = 0; i < n; i += 3) {
            
            ans += cost[i];
            
            if (i + 1 < n) {
                ans += cost[i + 1];
            }
        }
        
        return ans;
    }
};