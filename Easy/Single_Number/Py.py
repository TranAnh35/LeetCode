class Solution(object):
    def singleNumber(self, nums):
        sum = 0
        for i in range(len(nums)):
            sum ^= nums[i]
        return sum
    
if __name__ == '__main__':
    nums = [4,1,2,1,2]
    print(Solution().singleNumber(nums))