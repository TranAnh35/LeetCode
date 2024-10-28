#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int integerBreak(int n) {
        if(n <= 3) return n - 1;
        int k = n / 3, d = n % 3;
        return d == 0 ? pow(3, k) : (d == 1 ? 4 * pow(3, k - 1) : 2 * pow(3, k));
    }
};

int main() {
    int n = 10;
    Solution sol;
    cout << sol.integerBreak(n) << endl;
    return 0;
}