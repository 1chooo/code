"""
* Author: Lin Hugo <hugo@1chooo.com>
* Problem: https://leetcode.com/problems/middle-of-the-linked-list
* Runtime: 0ms (100.00%)
"""


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next:
            return head

        slow, fast = head, head

        while fast and fast.next:
            # slow + 1
            slow = slow.next
            # fast + 2
            fast = fast.next.next

        return slow
