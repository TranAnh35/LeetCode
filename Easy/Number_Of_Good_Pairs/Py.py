import collections
import math
from typing import List


class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        return sum([math.comb(n, 2) for n in collections.Counter(nums).values()]) 
    
if __name__ == '__main__':
    nums = [1,2,3,1,1,3]
    print(Solution().numIdenticalPairs(nums))