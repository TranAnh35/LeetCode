#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    string convertToTitle(int columnNumber){
        string res;
        while(columnNumber){
            int i = --columnNumber % 26;
            columnNumber /= 26;
            res = (char)('A' + i) + res;
        }
        return res;
    }
};

int main() {
    int columnNumber = 701;
    Solution sol;
    cout << sol.convertToTitle(columnNumber) << endl;
    return 0;
}