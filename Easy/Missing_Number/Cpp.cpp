#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int>temp(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            temp[nums[i]]=1;
        }
        int c;
        for(int i=0;i<temp.size();i++){
            if(temp[i]==0){
                c=i;
            }
        }
        return c;
    }
};

int main() {
    vector<int> nums = {3,0,1};
    Solution sol;
    cout << sol.missingNumber(nums) << endl;
    return 0;
}