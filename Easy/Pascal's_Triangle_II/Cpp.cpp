#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>v;
        for (int i=0; i<rowIndex+1; i++) {
            vector<int>v1(i+1, 1);
            for (int j=1; j<i; j++) {
                v1[j]=v[i-1][j]+v[i-1][j-1];
            }
            v.push_back(v1);
        }
        return v[rowIndex];
    }
};

int main() {
    int rowIndex = 3;
    Solution sol;
    vector<int> result = sol.getRow(rowIndex);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}