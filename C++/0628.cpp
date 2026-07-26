#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        int n = nums.size();
        int product = 0; 
        
        sort(nums.begin(), nums.end());

        product = max(nums[n - 1] * nums[n - 2] * nums[n - 3], 
                            nums[n - 1] * nums[0] * nums[1]);

        return product;
    }
};