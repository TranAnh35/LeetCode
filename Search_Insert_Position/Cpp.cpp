#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
        for(i = 0; i < nums.size(); i++){
            if(nums[i] >= target){
                break;
            }
        }
        return i;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,3,5,6};
    int target = 5;
    cout << s.searchInsert(nums, target) << endl;
    return 0;
}