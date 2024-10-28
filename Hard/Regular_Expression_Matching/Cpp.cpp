#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        // Tạo một Map để lưu kết quả của các cặp chuỗi và pattern đã được tính toán
        unordered_map<string, bool> memo;

        return isMatchHelper(s, p, memo);
    }

private:
    bool isMatchHelper(const string& s, const string& p, unordered_map<string, bool>& memo) {
        // Kiểm tra xem kết quả đã được tính toán chưa
        string key = s + "-" + p;
        if (memo.count(key))
            return memo[key];

        // Nếu pattern rỗng thì chuỗi cũng phải rỗng
        if (p.empty())
            return s.empty();

        bool match = false;

        // Nếu pattern có kí tự '*' ở vị trí thứ 2
        if (p.length() > 1 && p[1] == '*') {
            // Case 1: Bỏ qua cặp kí tự '*' và kí tự trước đó
            match = isMatchHelper(s, p.substr(2), memo);

            // Case 2: Kiểm tra xem kí tự đầu của chuỗi có trùng với kí tự đầu của pattern hay không
            if (!match && !s.empty() && (s[0] == p[0] || p[0] == '.'))
                match = isMatchHelper(s.substr(1), p, memo);
        }
        else {
            // Kiểm tra xem kí tự đầu của chuỗi có trùng với kí tự đầu của pattern hay không
            if (!s.empty() && (s[0] == p[0] || p[0] == '.'))
                match = isMatchHelper(s.substr(1), p.substr(1), memo);
        }

        // Lưu kết quả vào Map
        memo[key] = match;

        return match;
    }
};

int main() {
    Solution solution;
    string s = "aab";
    string p = "c*a*b";
    if(Solution().isMatch(s, p)) cout << "True" << endl;
    else cout << "False" << endl;
    return 0;
}