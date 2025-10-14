"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/linked-list-cycle
* Runtime: 43ms (85.03%)
"""


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        if not head or not head.next:
            return False

        fast = head
        slow = head

        while fast and fast.next:
            if fast.next.next == slow.next:
                return True
            fast = fast.next.next
            slow = slow.next


        return False
