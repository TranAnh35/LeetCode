from typing import List


class Solution:
    def getCommon(self, nums1: List[int], nums2: List[int]) -> int:
        nums1 = set(nums1)
        nums2 = set(nums2)
        common = nums1 & nums2
        if len(common) == 0:
            return -1
        return min(common)
    
if __name__ == "__main__":
    nums1 = [1, 2, 3, 4, 5]
    nums2 = [2, 3, 4, 5, 6]
    print(Solution().getCommon(nums1, nums2))
    nums1 = [1, 2, 3, 4, 5]
    nums2 = [6, 7, 8, 9, 10]
    print(Solution().getCommon(nums1, nums2))
    nums1 = [1, 2, 3, 4, 5]
    nums2 = [1, 2, 3, 4, 5]
    print(Solution().getCommon(nums1, nums2))
    nums1 = [1, 2, 3, 4, 5]
    nums2 = [1, 2, 3, 4, 5, 6]
    print(Solution().getCommon(nums1, nums2))
    nums1 = [1, 2, 3, 4, 5]
    nums2 = [1, 2, 3, 4, 5, 6, 7]
    print(Solution().getCommon(nums1, nums2))
    nums1 = [1, 2, 3, 4, 5]
    nums2 = [1, 2, 3, 4, 5, 6, 7, 8]
    print(Solution().getCommon(nums1, nums2))
    nums1 = [1, 2, 3, 4, 5]
    nums2 = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    print(Solution().getCommon(nums1, nums2))
    nums1 = [1, 2, 3, 4, 5]
    nums2 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    print(Solution().getCommon(nums1, nums2))