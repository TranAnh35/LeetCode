from typing import List


class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        ans = []
        suffix = [1] * len(nums)
        prefix = [1] * len(nums)
        for i in range(1, len(nums)):
            prefix[i] = prefix[i - 1] * nums[i - 1]
        for i in range(len(nums) - 2, -1, -1):
            suffix[i] = suffix[i + 1] * nums[i + 1]
        for i in range(len(nums)):
            ans.append(prefix[i] * suffix[i])
        return ans
    

if __name__ == "__main__":
    s = Solution()
    print(s.productExceptSelf([1, 2, 3, 4]))
    print(s.productExceptSelf([1, 2, 2, 3, 3, 3]))
    print(s.productExceptSelf([1, 2, 2, 3, 3, 3, 4, 4, 4, 4]))