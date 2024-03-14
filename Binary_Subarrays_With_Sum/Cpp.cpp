#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> map;
        int sum = 0;
        int res = 0;
        map[0] = 1;
        for(int num : nums){
            sum += num;
            if(map.find(sum - goal) != map.end())
                res += map[sum - goal];
            map[sum]++;
        }
        return res;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,0,1,0,1};
    int goal = 2;
    cout << s.numSubarraysWithSum(nums, goal) << endl;
    return 0;
}