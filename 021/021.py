# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1, list2):

        ## Input:
        # list1: Optional[ListNode], list2: Optional[ListNode]
        ## Output:
        # Optional[ListNode]

        if (list1 == None):
            return list2
        if (list2 == None):
            return list1
        
        result = ListNode(-1)
        p = result
        while (list1 != None and list2 != None):
            if (list1.val <= list2.val):
                p.next = ListNode(list1.val)
                p = p.next
                list1 = list1.next
            else:
                p.next = ListNode(list2.val)
                p = p.next
                list2 = list2.next
        
        while (list1 != None):
            p.next = ListNode(list1.val)
            p = p.next
            list1 = list1.next 
        while (list2 != None):
            p.next = ListNode(list2.val)
            p = p.next
            list2 = list2.next
        
        return result.next