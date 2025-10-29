"""
* Author: Lin Hugo <hugo@1chooo.com>
* Problem: https://leetcode.com/problems/merge-intervals
* Runtime: 4ms (77.69%)
"""

from typing import List


class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()

        merged = []
        prev = intervals[0]

        for i in range(1, len(intervals)):
            if intervals[i][0] <= prev[1]:  # overlap
                prev[1] = max(prev[1], intervals[i][1])  # merge
            else:
                merged.append(prev)
                prev = intervals[i]

        merged.append(prev)

        return merged
