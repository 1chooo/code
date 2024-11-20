"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/reverse-nodes-in-k-group
* Runtime: 0ms (100.00%)
"""

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        def reverse(start, end):
            prev = None
            current = start
            while current != end:
                next_node = current.next
                current.next = prev
                prev = current
                current = next_node
            return prev
        
        count = 0
        current = head
        while current and count < k:
            current = current.next
            count += 1
        
        if count < k:
            return head
        
        reversed_head = reverse(head, current)
        head.next = self.reverseKGroup(current, k)
        
        return reversed_head
