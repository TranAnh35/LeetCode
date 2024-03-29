#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() == 0 || nums2.size() == 0) return -1;
        int i = 0, j = 0;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] == nums2[j]) return nums1[i];
            else if(nums1[i] < nums2[j]) i++;
            else if(nums1[i] > nums2[j]) j++;
        }
        return -1;
    }
};

int main(){
    Solution s;
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {3, 4, 5, 6, 7};
    cout << s.getCommon(nums1, nums2) << endl;
    return 0;
}