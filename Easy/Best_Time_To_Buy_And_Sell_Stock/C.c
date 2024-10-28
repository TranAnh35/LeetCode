#include <stdio.h>

int maxProfit(int* prices, int pricesSize){
    int min=prices[0], ans=0;
    for (int i=0; i<pricesSize; i++)
    {
        if (prices[i]>min) (ans = ans > prices[i]-min ? ans:prices[i]-min);
        else min=prices[i];
    }
    return ans;
}

int main() {
    int prices[] = {7,1,5,3,6,4};
    int pricesSize = 6;
    printf("%d\n", maxProfit(prices, pricesSize));
    return 0;
}