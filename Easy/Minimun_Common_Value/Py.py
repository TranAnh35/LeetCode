from typing import List


class Solution:
    def getCommon(self, nums1: List[int], nums2: List[int]) -> int:
        pos1 = 0
        pos2 = 0
        while pos1 < len(nums1) and pos2 < len(nums2):
            if nums1[pos1] == nums2[pos2]:
                return nums1[pos1]
            if nums1[pos1] < nums2[pos2]:
                pos1 += 1
            else:
                pos2 += 1
        return -1
    
if __name__ == '__main__':
    nums1 = [1,2,3,4]
    nums2 = [2,3,4,5]
    print(Solution().getCommon(nums1, nums2))