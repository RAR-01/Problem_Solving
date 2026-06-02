#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int solve(vector<int>& aStart, vector<int>& aDur,
              vector<int>& bStart, vector<int>& bDur){

         int m = bStart.size();

         vector<pair<int, int>> b;
         for(int i = 0; i < m; i++) {
            b.push_back({bStart[i], bDur[i]});
         }

         sort(b.begin(), b.end());

         vector<int> starts(m);
         vector<int> minDur(m);
         vector<int> minStartPlusDur(m);

         starts[0] = b[0].first;
         minDur[0] = b[0].second;

         for(int i = 1; i < m; i++){
            starts[i] = b[i].first;
            minDur[i] = min(minDur[i - 1], b[i].second);
        }

        minStartPlusDur[m - 1] = b[m - 1].first + b[m - 1].second;

        for(int i = m - 2; i >= 0; i--){
            minStartPlusDur[i] = min(minStartPlusDur[i + 1],
                    b[i].first + b[i].second);
        }

        int ans = INT_MAX;

        for(int i = 0; i < aStart.size(); i++){

            int finish = aStart[i] + aDur[i];

            int idx = upper_bound(
                starts.begin(),
                starts.end(),
                finish
            ) - starts.begin();

            if(idx > 0)
                ans = min(ans, finish + minDur[idx - 1]);

            if(idx < m)
                ans = min(ans, minStartPlusDur[idx]);
        }
        
        return ans;
    }

    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        
        return min(
            solve(landStartTime, landDuration, waterStartTime, waterDuration),
            solve(waterStartTime, waterDuration, landStartTime, landDuration)
        );
    }
};

//2nd Approach
class Solution {
    int solve(vector<int>& start1, vector<int>& duration1, vector<int>& start2,
              vector<int>& duration2) {
        int finish1 = INT_MAX;
        for (int i = 0; i < start1.size(); i++) {
            finish1 = min(finish1, start1[i] + duration1[i]);
        }

        int finish2 = INT_MAX;
        for (int i = 0; i < start2.size(); i++) {
            finish2 = min(finish2, max(start2[i], finish1) + duration2[i]);
        }
        return finish2;
    }

public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {
        int land_water =
            solve(landStartTime, landDuration, waterStartTime, waterDuration);
        int water_land =
            solve(waterStartTime, waterDuration, landStartTime, landDuration);
        return min(land_water, water_land);
    }
};