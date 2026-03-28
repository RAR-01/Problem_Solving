// LeetCode Problem no 3842


// class Solution {
// public:
//     vector<int> toggleLightBulbs(vector<int>& bulbs) {
//         unordered_map<int, int>freq;

//         for(int b : bulbs){
//             freq[b]++;
//         }

//         vector<int> result;

//         for (auto const& [bulbID, count] : freq) {
//             if (count % 2 != 0) {
//                 result.push_back(bulbID);
//             }
//         }
//         sort(result.begin(), result.end());

//         return result;
//     }
// };