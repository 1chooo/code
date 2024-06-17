# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        # Check if either of the lists is empty
        if not l1:
            return l2
        if not l2:
            return l1
        
        # Create a dummy node to start the merged list
        dummy = ListNode(0)
        current = dummy
        
        # Loop until both lists have nodes
        while l1 and l2:
            # Compare the values of the nodes and append the smaller one to the merged list
            if l1.val <= l2.val:
                current.next = l1
                l1 = l1.next
            else:
                current.next = l2
                l2 = l2.next
            current = current.next
        
        # Append the remaining nodes from list1 or list2
        if l1:
            current.next = l1
        if l2:
            current.next = l2
        
        # Return the merged list starting from the dummy node's next
        return dummy.next
