#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        vector<int> out;
        set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(out));
        if(out.size() == 0){
            return -1;
        }
        return out[0];
    }
};

int main() {
    vector<int> nums1 = {1,2,3,4,5};
    vector<int> nums2 = {4,5,6,7,8};
    Solution sol;
    cout << sol.getCommon(nums1, nums2) << endl;
    return 0;
}