from typing import List


class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if not nums:
            return 0
        i = 0
        for j in range(1, len(nums)):
            if nums[i] != nums[j]:
                i += 1
                nums[i] = nums[j]
        return i + 1
    
    
if __name__ == "__main__":
    s = Solution()
    print(s.removeDuplicates([1, 1, 2])) 
    print(s.removeDuplicates([0,0,1,1,1,2,2,3,3,4])) 
    print(s.removeDuplicates([1, 1, 1])) 
    print(s.removeDuplicates([1, 2, 3])) 
    print(s.removeDuplicates([1, 2, 2, 3])) 
    print(s.removeDuplicates([1, 1, 2, 2, 3, 3])) 
    print(s.removeDuplicates([1, 1, 1, 2, 2, 3, 3])) 
    print(s.removeDuplicates([1, 1, 2, 2, 3, 3, 3])) 
    print(s.removeDuplicates([1, 1, 1, 1, 2, 2, 3, 3, 3])) 
    print(s.removeDuplicates([1, 1, 1, 1, 1, 2, 2, 3, 3, 3])) 
    print(s.removeDuplicates([1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 3])) 
    print(s.removeDuplicates([1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 3])) 
    print(s.removeDuplicates([1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 3])) 
    print(s.removeDuplicates([1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 3])) 
    print(s.removeDuplicates([1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 3])) 
    print(s.removeDuplicates([1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 3]))