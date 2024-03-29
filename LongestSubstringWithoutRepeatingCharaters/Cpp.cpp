#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;
        unordered_map<char, int> map;
        for (int j = 0, i = 0; j < n; j++) {
            if (map.find(s[j]) != map.end()) {
                i = max(map[s[j]], i);
            }
            ans = max(ans, j - i + 1);
            map[s[j]] = j + 1;
        }
        return ans;
    }
};


int main() {
    Solution s;
    cout << s.lengthOfLongestSubstring("pwwkew") << endl;
    return 0;
}