from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None:
            return None
        current = head
        while current.next is not None:
            if current.val == current.next.val:
                current.next = current.next.next
            else:
                current = current.next
        return head
    
    def print_list(self, head: Optional[ListNode]):
        current = head
        while current is not None:
            print(current.val, end=' -> ')
            current = current.next
    
if __name__ == '__main__':
    head = ListNode(1, ListNode(1, ListNode(2, ListNode(3, ListNode(3)))))
    head = Solution().deleteDuplicates(head)
    print(Solution().print_list(head))
    