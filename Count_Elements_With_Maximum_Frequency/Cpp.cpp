#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxFreq = 0;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
            maxFreq = max(maxFreq, mp[nums[i]]);
            if(mp[nums[i]] > 1)
                nums[i] = 0;
        }
        int count = 0;
        for(int num : nums){
            if(mp[num] == maxFreq)
                count++;
        }
        return count * maxFreq;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1, 2, 2, 3, 3, 3};
    cout << sol.maxFrequencyElements(nums) << endl;
    return 0;
}