"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/remove-nth-node-from-end-of-list
* Runtime: 0ms (100.00%)
"""

from typing import Optional


# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        len = 0
        dummy = head

        while head:
            len += 1
            head = head.next

        gap = len - n + 1
        head = dummy

        if gap == 1:
            return dummy.next

        for _ in range(gap - 2):
            head = head.next

        head.next = head.next.next

        return dummy


"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/remove-nth-node-from-end-of-list
* Runtime: 0ms (100.00%)
"""


class Solution2:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        res = ListNode(0, head)
        dummy = res

        for _ in range(n):
            head = head.next

        while head:
            head = head.next
            dummy = dummy.next

        dummy.next = dummy.next.next

        return res.next


"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/remove-nth-node-from-end-of-list
* Runtime: 0ms (100.00%)
"""


class Solution3:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        dummy = ListNode(0, head)
        fast = slow = dummy

        # Move fast n+1 steps so slow lands before target
        for _ in range(n + 1):
            fast = fast.next

        # Move both
        while fast:
            fast = fast.next
            slow = slow.next

        # Remove
        slow.next = slow.next.next
        return dummy.next
