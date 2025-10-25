"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/reverse-linked-list/
* Runtime: 0ms (100.00%)
"""


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        reversed_head = None

        while head:
            tmp = head.next
            head.next = reversed_head
            reversed_head = head
            head = tmp

        return reversed_head
