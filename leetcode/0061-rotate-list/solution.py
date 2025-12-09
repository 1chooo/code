"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/rotate-list
* Runtime: 0ms (100.00%)
"""

from typing import Optional


# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head or not head.next:
            return head

        length = 1
        dummy = head
        while dummy.next:
            dummy = dummy.next
            length += 1

        k = k % length
        if k == 0:
            return head

        # find new tail (length - k - 1 steps from start)
        new_tail = head
        for _ in range(length - k - 1):
            new_tail = new_tail.next

        # new head is next of new_tail
        new_head = new_tail.next

        # Step 5: rotate
        new_tail.next = None
        dummy.next = head

        return new_head
    