#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s;
        }
        string ans = "";
        for(int i = 0; i < numRows; i++){
            for(int j = i; j < s.length(); j += 2 * numRows - 2){
                ans += s[j];
                if(i != 0 && i != numRows - 1 && j + 2 * numRows - 2 - 2 * i < s.length()){
                    ans += s[j + 2 * numRows - 2 - 2 * i];
                }
            }
        }
        return ans;
    }
};

int main(){
    string s = "P";
    int numRows = 1;
    Solution sol;
    cout << sol.convert(s, numRows) << endl;
    return 0;
}