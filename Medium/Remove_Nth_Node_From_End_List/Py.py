from typing import Optional


class ListNode:
    def __init__(self, x, next=None):
        self.val = x
        self.next = next
        
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        ans = ListNode(0, head)
        fast = slow = ans
        while n:
            fast = fast.next
            n -= 1
        while fast.next:
            fast = fast.next
            slow = slow.next
        slow.next = slow.next.next
        return ans.next
    
    def printList(self, head: Optional[ListNode]) -> None:
        while head:
            print(head.val, end=" -> ")
            head = head.next
        print("None")
    
if __name__ == "__main__":
    s = Solution()
    head = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))
    s.printList(s.removeNthFromEnd(head, 2))