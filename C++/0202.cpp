#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        
        set<int> seen;

        int temp = n;

        while(n != 1){

            if(seen.find(n) != seen.end()){
                return false;
            }

            seen.insert(n);

            int new_num = 0;
            int temp = 0;

            while(temp != 0){
                int digit = temp % 10;
                new_num += digit * digit;
                temp  = temp / 10;
            }

            n = new_num;
        }
        return true;
    }
};