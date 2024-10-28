#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int n = sqrt(x);
        return n;
    }
};

int main(){
    Solution s;
    int x = 8;
    int result = s.mySqrt(x);
    cout << result << endl;
    return 0;
}