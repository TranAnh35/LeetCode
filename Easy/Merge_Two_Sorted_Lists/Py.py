from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
        
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if list1 is None:
            return list2
        if list2 is None:
            return list1
        if list1.val < list2.val:
            list1.next = self.mergeTwoLists(list1.next, list2)
            return list1
        else:
            list2.next = self.mergeTwoLists(list1, list2.next)
            return list2
    
    
if __name__ == '__main__':
    ListNode1 = ListNode(1, ListNode(2, ListNode(4)))
    ListNode2 = ListNode(1, ListNode(3, ListNode(4)))
    solution = Solution()
    res = ListNode()
    res = solution.mergeTwoLists(ListNode1, ListNode2)
    while res:
        print(res.val, end=' ')
        res = res.next