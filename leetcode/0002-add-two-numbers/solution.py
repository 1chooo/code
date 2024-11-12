"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/add-two-numbers/
* Runtime: 3ms (70.91%)
"""

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        dummy = ListNode()
        current = dummy 
        carry = 0
        
        while l1 or l2 or carry:
            sum_val = carry
            
            if l1:
                sum_val += l1.val
                l1 = l1.next
            if l2:
                sum_val += l2.val
                l2 = l2.next
            
            carry, val = divmod(sum_val, 10)
            current.next = ListNode(val)
            current = current.next
        
        return dummy.next
