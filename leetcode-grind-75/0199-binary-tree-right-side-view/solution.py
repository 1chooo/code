"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/binary-tree-right-side-view
* Runtime: 0ms (100.00%)
"""

from collections import deque
from typing import List, Optional


class TreeNode:
    """
    Definition for a binary tree node.
    """

    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        if not root:
            return []

        res = []
        q = deque([root])

        while q:
            level_size = len(q)

            for i in range(level_size):
                node = q.popleft()

                if i == level_size - 1:
                    res.append(node.val)

                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)

        return res
