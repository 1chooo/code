"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array
* Runtime: 0ms (100.00%)
"""

class Solution:
    def closestTarget(self, words: List[str], target: str, startIndex: int) -> int:
        n = len(words)
        best = float("inf")

        for i in range(n):
            if words[i] == target:
                diff = abs(i - startIndex)
                dist = min(diff, n - diff)
                best = min(best, dist)

        if best == float("inf"):
            return -1

        return best
