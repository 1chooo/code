"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/minimum-absolute-distance-between-mirror-pairs
* Runtime: 224ms (65.50%)
"""

from typing import List


class Solution:
    def minMirrorPairDistance(self, nums: List[int]) -> int:
        def rev(x: int) -> int:
            return int(str(x)[::-1])

        latest = {}
        ans = float("inf")

        for j, x in enumerate(nums):
            if x in latest:
                ans = min(ans, j - latest[x])

            latest[rev(x)] = j

        return ans if ans != float("inf") else -1
