#include<bits/stdc++.h>
using namespace std;

//brute force giving TLE
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0; 
        int n = prices.size();

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(prices[i] < prices[j]){
                    profit = max(profit, prices[j] - prices[i]);
                }
            }
        }

        return profit;
    }
};

//optimised version-
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int cheapest_price = INT_MAX;
        int profit = 0;

        for(auto price : prices){
            cheapest_price = min(cheapest_price, price);

            profit = max(profit, price - cheapest_price);
        }

        return profit;
    }
};