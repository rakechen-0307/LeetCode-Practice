# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1, l2):

        ## Input:
        # l1: Optional[ListNode], l2: Optional[ListNode]
        ## Output:
        # Optional[ListNode]

        ### calculate the add result 
        add = []
        carrier = 0

        while ((l1 != None) and (l2 != None)):
            add.append((l1.val + l2.val + carrier) % 10)
            carrier = (l1.val + l2.val + carrier) // 10
            l1 = l1.next
            l2 = l2.next
        
        if (l1 != None):
            while (l1 != None):
                add.append((l1.val + carrier) % 10)
                carrier = (l1.val + carrier) // 10
                l1 = l1.next

        elif (l2 != None):
            while (l2 != None):
                add.append((l2.val + carrier) % 10)
                carrier = (l2.val + carrier) // 10
                l2 = l2.next
        
        if (carrier == 1):
            add.append(carrier)
        
        ### store the result into ListNode
        result = ListNode(add[len(add)-1], None)
        for i in range(len(add)-2, -1, -1):
            nxt_result = ListNode(add[i], result)
            result = nxt_result
        
        return result