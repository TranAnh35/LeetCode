from typing import List


class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n = int(len(nums)/2)
        nums.sort()
        return nums[n]
    
if __name__ == '__main__':
    nums = [3,2,3]
    print(Solution().majorityElement(nums))