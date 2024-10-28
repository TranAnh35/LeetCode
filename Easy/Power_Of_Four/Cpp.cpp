#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;
        int num = 1;
        while (num < INT_MAX / 4) {
            if (num == n) return true;
            num *= 4;
        }
        if (num == n) return true;
        return false;
    }
};

int main(){
    int n = 16;
    Solution sol;
    if(sol.isPowerOfFour(n)) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}