#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        
        int global_max = *max_element(nums.begin(), nums.end());
        int global_min = *min_element(nums.begin(), nums.end());

        long long difference = global_max - global_min;

        long long ans = difference * k;

        return ans;
    }
};