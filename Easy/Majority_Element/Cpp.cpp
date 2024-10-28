#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counted;
        for(int num : nums){
            if(++counted[num] > nums.size()/2)
                return num;
        }
        return 0;
    }
};

int main() {
    vector<int> nums = {3,2,3};
    Solution sol;
    cout << sol.majorityElement(nums) << endl;
    return 0;
}