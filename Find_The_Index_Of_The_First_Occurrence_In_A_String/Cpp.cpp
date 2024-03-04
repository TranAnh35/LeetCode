#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};

int main(){
    Solution s;
    cout << s.strStr("hello", "ll") << endl;
    return 0;
}