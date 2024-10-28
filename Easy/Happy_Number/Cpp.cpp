#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        if(n == 1) return true;
        else if(n >= 2 && n <= 4) return false;
        else{
            int x = n, sum = 0;
            while(x != 0){
                int k = x % 10;
                sum += (k * k);
                x /= 10;
            }
            return isHappy(sum);
        }
    }
};

int main() {
    int n = 19;
    Solution sol;
    if(sol.isHappy(n)) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}