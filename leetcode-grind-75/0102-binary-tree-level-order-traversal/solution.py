"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/binary-tree-level-order-traversal
* Runtime: 0ms (100.00%)
"""

from typing import List, Optional


# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root:
            return []

        res = []
        queue = [root]

        while queue:
            level_size = len(queue)
            level_nodes = []

            while level_size > 0:
                node = queue.pop(0)
                level_nodes.append(node.val)

                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)

                level_size -= 1

            res.append(level_nodes)

        return res
