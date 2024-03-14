from typing import List


class Solution:
    def numSubarraysWithSum(self, nums: List[int], goal: int) -> int:
        count = {0: 1}
        curr_sum = 0
        total_subarrays = 0
        
        for num in nums:
            curr_sum += num
            if curr_sum - goal in count:
                total_subarrays += count[curr_sum - goal]
            count[curr_sum] = count.get(curr_sum, 0) + 1

        return total_subarrays
    
if __name__ == "__main__":
    s = Solution()
    print(s.numSubarraysWithSum([1,0,1,0,1], 2)) # 4
    print(s.numSubarraysWithSum([0,0,0,0,0], 0)) # 15