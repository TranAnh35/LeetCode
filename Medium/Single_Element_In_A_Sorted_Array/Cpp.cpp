#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = 0;
        for(auto it : nums) ans = ans^it;
        return ans;
    }
};

int main() {
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    Solution sol;
    cout << sol.singleNonDuplicate(nums) << endl;
    return 0;
}