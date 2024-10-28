#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int niner = 0;
        for(int i = digits.size() - 1; i >= 0; --i){
            if(digits[i] != 9)
                break;
            niner++;
        }
        if(niner != digits.size()){
            for(int i = digits.size() - 1; i >= 0; --i){
                if(digits[i] == 9 && digits[i - 1] == 9)
                    digits[i] = 0;
                else if(digits[i] == 9 && digits[i - 1] != 9)
                    digits[i] = 0;
                else{
                    digits[i]++;
                    break;
                }
            }
            return digits;
        }
        else{
            digits[0] = 1;
            digits.push_back(0);
            for(int i = 1; i < (digits.size()); ++i)
                digits[i] = 0;
            return digits;
        }
    }
};

int main(){
    Solution s;
    vector<int> digits = {9,9,9};
    vector<int> result = s.plusOne(digits);
    for(int i = 0; i < result.size(); ++i)
        cout << result[i] << " ";
    cout << endl;
    return 0;
}