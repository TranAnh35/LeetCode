
from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
        
class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        def compare(a, b):
            if not a and b or not b and a:
                return False
            if not a and not b:
                return True
            if a.val != b.val:
                return False
            return compare(a.left, b.left) and compare(a.right, b.right)
        return compare(p, q)
    
if __name__ == '__main__':
    p = TreeNode(1)
    p.left = TreeNode(2)
    p.right = TreeNode(3)
    q = TreeNode(1)
    q.left = TreeNode(2)
    q.right = TreeNode(3)
    print(Solution().isSameTree(p, q))
