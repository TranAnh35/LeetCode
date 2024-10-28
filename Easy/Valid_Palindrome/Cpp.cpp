#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string res;
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
            if(isalnum(s[i]))
                res.push_back(s[i]);
        }
        for(int i = 0; i < res.size() / 2; i++){
            if(res[i] != res[res.size() - 1 - i])
                return false;
        }
        return true;
    }
};

int main() {
    string s = "amanaplanacanalpanama";
    Solution sol;
    if(sol.isPalindrome(s)) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}