#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minBitFlips(int start, int goal) {
        unsigned int temp = start ^ goal;
        int count = 0;
        while(temp != 0){
            auto test = temp & 1;
            count += test;
            temp = temp >> 1;
        }

        return count;   
    }
};

int main() {
    int start = 10;
    int goal = 7;
    Solution sol;
    cout << sol.minBitFlips(start, goal) << endl;
    return 0;
}