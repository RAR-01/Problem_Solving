#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;
        

        for(int i = 0; i< nums1.size(); i++){
            bool flag = false;
            for(int j = 0; j < nums2.size(); j++){
                if(nums2[j] == nums1[i]){
                    for(int k = j + 1; k < nums2.size(); k++){
                        if(nums2[k] > nums1[i]){
                            ans.push_back(nums2[k]);
                            flag = true;
                            break;
                        }
                    }
                    if(!flag){
                        ans.push_back(-1);
                    }
                    break;
                }
            }
        }
        return ans;
    }
}; 