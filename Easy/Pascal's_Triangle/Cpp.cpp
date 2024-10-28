#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    vector<vector<int>> generate(int numsRows){
        vector<vector<int>> res(numsRows);
        for(int i = 0; i < numsRows; ++i){
            res[i].resize(i + 1);
            res[i][0] = res[i][i] = 1;
            for(int j = 1; j < i; ++j){
                res[i][j] = res[i - 1][j] + res[i - 1][j - 1];
            }
        }
        return res;        
    }
};

int main() {
    int numRows = 5;
    Solution sol;
    vector<vector<int>> res = sol.generate(numRows);
    for(int i = 0; i < res.size(); ++i){
        for(int j = 0; j < res[i].size(); ++j){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}