// Problem no 2839

// class Solution {
// public:
//     bool canBeEqual(string s1, string s2) {
//        string s1_even = {s1[0], s1[2]};
//        string s2_even = {s2[0], s2[2]};

//        string s1_odd = {s1[1], s1[3]};
//        string s2_odd = {s2[1], s2[3]};

//        sort(s1_even.begin(), s1_even.end());
//        sort(s2_even.begin(), s2_even.end());
//        sort(s1_odd.begin(), s1_odd.end());
//        sort(s2_odd.begin(), s2_odd.end());

//        return s1_even == s2_even && s1_odd == s2_odd;
//     }
// };

//2nd Method 
// class Solution {
// public:
//     bool canBeEqual(string s1, string s2) {
//         if (s1 == s2) return true;
//         string temp = s1;

//         swap(temp[0], temp[2]);
//         if (temp ==  s2) return true;
        
//         swap(temp[1], temp[3]);
//         if (temp == s2) return true;
        
//         swap(s1[1], s1[3]);
//         if (s1 == s2) return true;

//         return false;
//     }
// };