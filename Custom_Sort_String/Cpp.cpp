#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    string customSortString(string order, string s) {
        string ans;
        vector<int> count(26, 0);
        for(char c : s){
            count[c - 'a']++;
        }
        for(char c : order){
            while(count[c - 'a'] > 0){
                ans += c;
                count[c - 'a']--;
            }
        }
        for(int i = 0; i < 26; i++){
            while(count[i] > 0){
                ans += (char)('a' + i);
                count[i]--;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    cout << s.customSortString("cba", "abcd") << endl;
    return 0;
}