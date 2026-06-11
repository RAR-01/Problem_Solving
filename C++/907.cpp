#include<bits/stdc++.h>
using namespace std;

// This solution gives TLE since time complexity is O(n^2).
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        
        long long sum = 0;
        int n = arr.size();
        const int MOD = 1e9 + 7;

        for (int i = 0; i < n; i++){
            
            int minimum = arr[i];
            for(int j = i; j < n; j++){
                minimum = min(minimum, arr[j]);
                sum += minimum;
            }
        }

        return sum % MOD;
    }
};

//Solution using monotonic stack, time complexity O(n)
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        
        const int MOD = 1e9 + 7;
        long long ans = 0;     
        int n= arr.size();

        vector<int> pse(n);
        stack<int> st;

        for(int i = 0; i < n; i++){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }

            if(st.empty()){
                pse[i] = -1;
            }
            else{
                pse[i] = st.top();
            }
            st.push(i);
        }

        while (!st.empty()){
            st.pop();
        }

        vector<int> nse(n);

        for(int i = n - 1; i >= 0; i--){
            
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }

            if(st.empty()){
                nse[i] = n;
            }
            else{
                nse[i] = st.top();
            }
            st.push(i);
        }

        for(int i = 0; i < n; i++){
            long long leftchoices = i - pse[i];
            long long rightchoices = nse[i] - i;

            long long contribution = 
                (1LL * arr[i] * leftchoices * rightchoices) % MOD;

            ans = (ans + contribution) % MOD;
        }
        return int(ans);
    }
};