#include<bits/stdc++.h>
using namespace std;

//O(n^2)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int product = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                product = max(product, (nums[i] - 1) * (nums[j] - 1));
            }
        }
        return product;
    }
};

//O(n)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int maxi1 = INT_MIN;
        int maxi2 = INT_MIN;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(nums[i] > maxi1){
                maxi2 = maxi1;
                maxi1 = nums[i];
            }

            else if(nums[i] > maxi2){
                maxi2 = nums[i];
            }
        }
        return (maxi1 - 1) * (maxi2 - 1);
    }
};