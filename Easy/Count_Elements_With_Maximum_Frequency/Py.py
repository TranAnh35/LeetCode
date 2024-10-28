from collections import defaultdict
from typing import List


class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        count = defaultdict(int)
        for i in nums:
            count[i] += 1
        m = max(count.values())
        ans = 0
        for i in count:
            if count[i] == m:
                ans += m
        return ans
        
    
if __name__ == "__main__":
    s = Solution()
    print(s.maxFrequencyElements([1, 2, 2, 3, 3, 3]))