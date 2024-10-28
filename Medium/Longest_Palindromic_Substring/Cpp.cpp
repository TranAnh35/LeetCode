#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "" ;
        int sum = 0;

        if(s.length() == 1){
            return s;
        }

        for (int i = 0; i < s.length(); i++){
            int left = i, right = i;
            while(left >= 0 && right < s.length() && s[left] == s[right]){
                if(right - left + 1 > sum){
                    sum = right - left + 1;
                    ans = s.substr(left, sum);
                }
                left--;
                right++;
            }
            left = i;
            right = i + 1;
            while(left >= 0 && right < s.length() && s[left] == s[right]){
                if(right - left + 1 > sum){
                    sum = right - left + 1;
                    ans = s.substr(left, sum);
                }
                left--;
                right++;
            }
        }
        return ans;
    }
};

int main(){
    string s = "babad";
    Solution sol;
    cout << sol.longestPalindrome(s) << endl;
    return 0;
}