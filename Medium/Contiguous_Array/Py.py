from typing import List


class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        map = {}
        length = sum = 0
        for i in range(len(nums)):
            sum += 1 if nums[i] == 1 else -1
            if sum == 0:
                length = i + 1
            if sum in map:
                length = max(length, i - map[sum])
            else:
                map[sum] = i
        return length
    
if __name__ == '__main__':
    s = Solution()
    print(s.findMaxLength([0,1]))