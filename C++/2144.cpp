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


// 1st Approach
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

        if (n % 3 == 1) {
            for (int i = 0; i < n; i += 3) {
                if (n - i > 2) {
                    ans += cost[i] + cost[i + 1];
                }
                else {
                    ans += cost[n - 1];
                }
            }
        }
        else {
            for (int i = 0; i < n; i += 3) {
                ans += cost[i];

                if (i + 1 < n) {
                    ans += cost[i + 1];
                }
            }
        }

        return ans;
    }
};


//2nd approach
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());

        int ans = 0;

        for(int i=cost.size()-1; i>=0; i=i-3){
            if(i-1>=0) ans += cost[i] + cost[i-1];
            else ans += cost[i];
        }

        return ans;
    }
};