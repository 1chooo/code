"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/swapping-nodes-in-a-linked-list
* Runtime: 28ms (90.45%)
"""

from typing import Optional


# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def swapNodes(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        # we first find the k_th node from the beginning
        first_k = head
        for _ in range(k - 1):
            first_k = first_k.next

        # then we use two pointers to find the k_th node from the end
        slow = head
        fast = first_k
        while fast.next:
            slow = slow.next
            fast = fast.next

        second_k = slow
        # swap values
        first_k.val, second_k.val = second_k.val, first_k.val

        return head