#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int sum = 0;
        string res;
        while(i >= 0 || j >=0 || sum){
            if (i >= 0) {
                sum += a[i] - '0';
                i--;
            }
            if (j >=0 ) {
                sum += b[j] - '0';
                j--;
            }
            res += (sum%2) + '0';
            sum = sum/2;
        }
        reverse(res.begin(), res.end());
		return res;
    }
};

int main(){
    Solution s;
    string a = "11";
    string b = "1";
    string result = s.addBinary(a, b);
    cout << result << endl;
    return 0;
}