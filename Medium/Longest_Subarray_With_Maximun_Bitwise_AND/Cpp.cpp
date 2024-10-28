#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int element = max_element(nums.begin(), nums.end()) - nums.begin();
        int maxLen = 0, x = nums[element];

        for(int i = element; i < n; i++) {
            int len = 0;
            while(i < n && nums[i] == x){
                i++;
                len++;
            }
            maxLen = max(maxLen, len);
        }
        return maxLen;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 3, 2, 4};
    cout << solution.longestSubarray(nums) << endl;
    return 0;
}