from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev = None
        temp = head
        while temp!= None:
            next = temp.next
            temp.next = prev
            prev = temp
            temp = next
        return prev
    
    def printList(self, head: Optional[ListNode]) -> None:
        while head:
            print(head.val, end=" ")
            head = head.next
        print()
    
if __name__ == '__main__':
    head = ListNode(1)
    head.next = ListNode(2)
    head.next.next = ListNode(3)
    head.next.next.next = ListNode(4)
    head.next.next.next.next = ListNode(5)
    Solution().printList(Solution().reverseList(head))