#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less, equal, greater;


        for (int num : nums) {
            if (num < pivot)
                less.push_back(num);
            else if (num == pivot)
                equal.push_back(num);
            else
                greater.push_back(num);
        }

        vector<int> result;
        result.insert(result.end(), less.begin(), less.end());
        result.insert(result.end(), equal.begin(), equal.end());
        result.insert(result.end(), greater.begin(), greater.end());

        return result;
    }
};

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans ;
        for(auto x : nums)
        {
            if(x < pivot)
            ans.push_back(x);
        }
        for(auto x : nums)
        {
            if(x == pivot)
            ans.push_back(x);
        }
        for(auto x : nums)
        {
            if(x >pivot)
            ans.push_back(x);
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector <int> lesser;
        vector <int> equal;
        vector <int> greater;

        for(int i = 0; i < nums.size(); i++){
            
            if(nums[i] < pivot){
                lesser.push_back(nums[i]);
            }
            else if(nums[i] == pivot){
                equal.push_back(nums[i]);
            }
            else{
                greater.push_back(nums[i]);
            }
        }

        lesser.insert(lesser.end(), equal.begin(), equal.end());
        lesser.insert(lesser.end(), greater.begin(), greater.end());

        return lesser;
    }
};