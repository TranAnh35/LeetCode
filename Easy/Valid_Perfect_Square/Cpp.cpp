#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)
            return true;
        int start=1;
        int end=num/2;
        while(start<=end)
        {
            long long int mid=start+(end-start)/2;
            if(mid*mid==num)
            {
                return true;
            }
            else if(mid*mid>num)
            {
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }  
        return false;
    }
};

int main() {
    int num = 16;
    Solution sol;
    if(sol.isPerfectSquare(num)) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}