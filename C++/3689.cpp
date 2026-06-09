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

// Below approach gives TLE
// int best = 0;
// int n = nums.size();
// for (int i = 0; i < n; i++) {
//     int mx = nums[i];
//     int mn = nums[i];

//     for (int j = i; j < n; j++) {
//         mx = max(mx, nums[j]);
//         mn = min(mn, nums[j]);

//         best = max(best, mx - mn);
//     }
// }