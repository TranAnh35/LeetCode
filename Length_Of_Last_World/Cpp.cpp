#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        int count = 0;

        while(i >= 0 && s[i] == ' ') {
            i--;
        }
        while(i >= 0 && s[i] != ' '){
            count++;
            i--;
        }
        return count;
    }
};

int main(){
    Solution s;
    cout << s.lengthOfLastWord("Hello World") << endl;
    return 0;
}