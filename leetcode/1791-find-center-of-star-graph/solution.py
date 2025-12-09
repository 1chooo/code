"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/find-center-of-star-graph
* Runtime: 0ms (100.00%)
"""

from typing import List


class Solution:
    def findCenter(self, edges: List[List[int]]) -> int:
        if edges[0][0] == edges[1][0] or edges[0][0] == edges[1][1]:
            return edges[0][0]
        return edges[0][1]
