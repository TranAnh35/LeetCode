from typing import List

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min = prices[0]
        ans = 0
        for i in range(len(prices)):
            if prices[i] > min:
                ans = ans if ans > prices[i] - min else prices[i] - min
            else:
                min = prices[i]
        return ans
    
if __name__ == '__main__':
    prices = [7,1,5,3,6,4]
    print(Solution().maxProfit(prices)) # 5