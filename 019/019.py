# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head, n):

        ## Input:
        # head: Optional[ListNode], n: int
        ## Output:
        # Optional[ListNode]
        
        p1, p2 = head, head
        for i in range(n):
            p1 = p1.next
        
        if (p1 == None):
            return head.next
        
        while (p1.next != None):
            p1 = p1.next
            p2 = p2.next

        p2.next = p2.next.next
        return head               