"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/find-champion-ii/
* Runtime: 0ms (100.00%)
"""

class Solution:
    def findChampion(self, n: int, edges: List[List[int]]) -> int:
        is_good: List[int] = [1] * n

        for edge in edges:
            is_good[edge[1]] = 0

        champion: int = -1

        for i in range(n):
            if is_good[i] == 1:
                if champion == -1:
                    return -1
                champion = i

        return champion
