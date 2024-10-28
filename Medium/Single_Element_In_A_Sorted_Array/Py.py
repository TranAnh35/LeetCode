from typing import List


class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        temp = 0
        for i in nums:
            temp ^= i
        return temp
    
if __name__ == '__main__':
    nums = [1,1,2,3,3,4,4,8,8]
    print(Solution().singleNonDuplicate(nums))