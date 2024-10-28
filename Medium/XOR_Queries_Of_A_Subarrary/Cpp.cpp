#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> result;

        for (int i = 1; i < arr.size(); ++i) {
            arr[i] ^= arr[i - 1];
        }

        for (const auto& querie : queries) {
            if (querie[0] > 0) {
                result.push_back(arr[querie[0] - 1] ^ arr[querie[1]]);
            } else {
                result.push_back(arr[querie[1]]);
            }
        }

        return result;
    }
};

int main(){
    vector<int> arr = {1, 3, 4, 8};
    vector<vector<int>> queries = {{0, 1}, {1, 2}, {0, 3}, {3, 3}};
    vector<int> ans = Solution().xorQueries(arr, queries);
    for (int i : ans){
        cout << i << " ";
    }
}