#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        long long rev = 0;
        int y = x;
        while (y > 0) {
            rev = rev * 10 + y % 10;
            y /= 10;
        }
        return rev == x;
    }
};

int main(){
    Solution s;
    cout << s.isPalindrome(121) << endl;
    cout << s.isPalindrome(-121) << endl;
    cout << s.isPalindrome(10) << endl;
    cout << s.isPalindrome(-101) << endl;
    return 0;
}