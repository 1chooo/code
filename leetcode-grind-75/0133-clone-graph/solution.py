"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/clone-graph
* Runtime: 30ms (98.99%)
"""

from typing import Optional

"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""


class Node:
    def __init__(self, val=0, neighbors=None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []


class Solution:
    def cloneGraph(self, node: Optional["Node"]) -> Optional["Node"]:
        if not node:
            return None

        old_to_new = {}

        def dfs(n: "Node") -> "Node":
            if n in old_to_new:
                return old_to_new[n]

            copy = Node(n.val)
            old_to_new[n] = copy

            for neighbor in n.neighbors:
                copy.neighbors.append(dfs(neighbor))

            return copy

        return dfs(node)
