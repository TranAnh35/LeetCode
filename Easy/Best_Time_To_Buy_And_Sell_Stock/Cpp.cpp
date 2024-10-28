#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minprice=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minprice=min(minprice, prices[i]);
            maxprofit=max(maxprofit,prices[i]-minprice);

        }
        return maxprofit;
    }
};

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    Solution sol;
    cout << sol.maxProfit(prices) << endl;
    return 0;
}