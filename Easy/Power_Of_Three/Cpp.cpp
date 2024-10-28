#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        int i;
        long long w=1;
        for(i=0;i<=20;i++){
            if(w==n){
                return true;
            }
            w=w*3;
        }
        return false;
        
    }
};

int main() {
    int n = 27;
    Solution sol;
    if(sol.isPowerOfThree(n)) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}