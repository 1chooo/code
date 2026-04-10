"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i
* Runtime: 3ms (67.11%)
"""

from typing import List

class Solution:
    def minimumDistance(self, nums: List[int]) -> int:
        from collections import defaultdict

        pos = defaultdict(list)
        ans = float("inf")

        for i, x in enumerate(nums):
            pos[x].append(i)

            if len(pos[x]) >= 3:
                _i, _j, _k = pos[x][-3], pos[x][-2], pos[x][-1]
                dist = abs(_i - _j) + abs(_j - _k) + abs(_k - _i)

                ans = min(dist, ans)

        return ans if ans != float("inf") else -1
