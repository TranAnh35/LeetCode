#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        while(nums1.size()>m){
            nums1.pop_back();
        }
        for(int j=0; j<n; j++){
            nums1.push_back(nums2[j]);
        }
        sort(nums1.begin(), nums1.end());
    }
};

int main(){
    Solution s;
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    int n = 3;
    s.merge(nums1, m, nums2, n);
    for(int i = 0; i < nums1.size(); i++){
        cout << nums1[i] << " ";
    }
    cout << endl;
    return 0;
}