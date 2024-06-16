# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        dummy = ListNode()  # Create a dummy node to start the result linked list
        current = dummy  # Initialize a pointer for traversal
        carry = 0  # Initialize carry for addition
        
        while l1 or l2 or carry:
            sum_val = carry
            
            if l1:
                sum_val += l1.val
                l1 = l1.next
            if l2:
                sum_val += l2.val
                l2 = l2.next
            
            carry, val = divmod(sum_val, 10)  # Update carry and get the value to insert in the new node
            current.next = ListNode(val)  # Create a new node with the calculated value
            current = current.next  # Move the pointer to the next node
        
        return dummy.next  # Return the next node of the dummy node, which is the starting point of the resultant linked list
