#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(int n) {
        
        vector<int> arr;

        while(n > 0) {
            int digit = n % 10;
            arr.push_back(digit);
            n = n / 10;
        }

        int product = 0;
        int z = arr.size();

        for(int i = 0; i < z; i++){
            for(int j = i + 1; j < z; j++){
                product = max(product, arr[i] * arr[j]);
            }
        }

        return product;
    }
};