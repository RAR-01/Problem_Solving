#include<bits/stdc++.h>
using namespace std;


//first intuion
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int sum = 0;
        vector <int> sum_list;

        for(int i = 0; i < gain.size(); i++){
            sum += gain[i];
            sum_list.push_back(sum);
        }

        int maxVal = *max_element(sum_list.begin(), sum_list.end());
        if (maxVal < 0){
            maxVal = 0;
        }
        return maxVal;
    }
};

// actual intution

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int sum = 0;
        int maxValue = 0;

        for(auto x : gain){
            sum += x;
            maxValue = max(sum, maxValue);
        }

        return maxValue;
    }
};