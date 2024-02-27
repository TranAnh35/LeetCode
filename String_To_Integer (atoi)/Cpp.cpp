#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        while(s[i] == ' '){
            i++;
        }
        int positive = 0, negative = 0; 
        if(s[i] == '+'){
            positive++;
            i++;
        }
        if(s[i] == '-'){
            negative++;
            i++;
        }
        double ans = 0; 
        while(i<n and s[i] >= '0' and s[i] <= '9'){
            ans = ans*10 + (s[i] - '0');
            i++;
        }
        if(negative > 0)
            ans = -ans;
        if(positive > 0 and negative > 0)
            return 0;
        if(ans > INT_MAX)
            ans = INT_MAX;

        if(ans < INT_MIN)
            ans = INT_MIN;

        return (int)ans;
    }
};


int main(){
    Solution s;
    cout << s.myAtoi("42") << endl;
    cout << s.myAtoi("   -42") << endl;
    cout << s.myAtoi("4193 with words") << endl;
    cout << s.myAtoi("words and 987") << endl;
    cout << s.myAtoi("-91283472332") << endl;
    cout << s.myAtoi("3.14159") << endl;
    cout << s.myAtoi("+-12") << endl;
    cout << s.myAtoi("   +0 123") << endl;
    cout << s.myAtoi("21474836460") << endl;
    cout << s.myAtoi("2147483648") << endl;
    return 0;
}