from typing import List, Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
        
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        if not nums:
            return None
        mid = len(nums) // 2
        root = TreeNode(nums[mid])
        root.left = self.sortedArrayToBST(nums[:mid])
        root.right = self.sortedArrayToBST(nums[mid + 1:])
        return root
    
    def print_tree(self, root: Optional[TreeNode]):
        if root is None:
            return
        self.print_tree(root.left)
        print(root.val, end=' ')
        self.print_tree(root.right)
    
if __name__ == '__main__':
    nums = [-10, -3, 0, 5, 9]
    root = Solution().sortedArrayToBST(nums)
    Solution().print_tree(root)