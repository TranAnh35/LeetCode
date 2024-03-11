#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() < 0 || nums2.size() < 0) return {};
        unordered_map<int, int> s;
        for(int i = 0; i < nums1.size(); i++) s[nums1[i]]++;
        vector<int> res;
        for(int i = 0; i < nums2.size(); i++){
            if(s.find(nums2[i]) != s.end()){
                res.push_back(nums2[i]);
                s.erase(nums2[i]);
            }
        }
        return res;
    }
};

int main(){
    Solution s;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> res = s.intersection(nums1, nums2);
    for(int i: res) cout << i << " ";
    return 0;
}