#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> count;
        int ans = 0;
        for(auto x: nums){
            ans += count[x]++;
        }
        return ans;
    }
};

int main(){
    vector<int> nums = {1,2,3,1,1,3};
    Solution sol;
    cout << sol.numIdenticalPairs(nums) << endl;
    return 0;
}