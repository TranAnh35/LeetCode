from typing import Optional


class ListNode:
    def __init__(self, x, next=None):
        self.val = x
        self.next = next
        
class Solution:
    def removeZeroSumSublists(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode(0, head)
        prefix = 0
        seen = {}
        cur = dummy
        while cur:
            prefix += cur.val
            seen[prefix] = cur
            cur = cur.next
        prefix = 0
        cur = dummy
        while cur:
            prefix += cur.val
            cur.next = seen[prefix].next
            cur = cur.next
        return dummy.next
    
    def printList(self, head: Optional[ListNode]) -> None:
        while head:
            print(head.val, end=" -> ")
            head = head.next
        print("None")
    
    
if __name__ == '__main__':
    s = Solution()
    head = ListNode(1, ListNode(2, ListNode(3, ListNode(-3, ListNode(4)))))
    s.printList(s.removeZeroSumSublists(head))
    head = ListNode(1, ListNode(2, ListNode(3, ListNode(-3, ListNode(-2)))))
    s.printList(s.removeZeroSumSublists(head))
    head = ListNode(1, ListNode(2, ListNode(3, ListNode(-3, ListNode(-2, ListNode(5))))))
    s.printList(s.removeZeroSumSublists(head))
    head = ListNode(1, ListNode(2, ListNode(3, ListNode(-3, ListNode(-2, ListNode(5, ListNode(-5)))))))
    s.printList(s.removeZeroSumSublists(head))
    head = ListNode(1, ListNode(2, ListNode(3, ListNode(-3, ListNode(-2, ListNode(5, ListNode(-5, ListNode(6))))))))
    s.printList(s.removeZeroSumSublists(head))
    head = ListNode(1, ListNode(2, ListNode(3, ListNode(-3, ListNode(-2, ListNode(5, ListNode(-5, ListNode(6, ListNode(-6)))))))))
    s.printList(s.removeZeroSumSublists(head))
    head = ListNode(1, ListNode(2, ListNode(3, ListNode(-3, ListNode(-2, ListNode(5, ListNode(-5, ListNode(6, ListNode(-6, ListNode(7))))))))))
    s.printList(s.removeZeroSumSublists(head))
    head = ListNode(1, ListNode(2, ListNode(3, ListNode(-3, ListNode(-2, ListNode(5, ListNode(-5, ListNode(6, ListNode(-6, ListNode(7, ListNode(-7)))))))))))
    s.printList(s.removeZeroSumSublists(head))
    head = ListNode(1, ListNode(2, ListNode(3, ListNode(-3, ListNode(-2, ListNode(5, ListNode(-5, ListNode(6, ListNode(-6, ListNode(7, ListNode(-7, ListNode(8))))))))))))
    s.printList(s.removeZeroSumSublists(head))