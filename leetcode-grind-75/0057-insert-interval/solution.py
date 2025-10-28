"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/insert-interval
* Runtime: 0ms (100.00%)
"""


class Solution:
    def insert(
        self, intervals: List[List[int]], newInterval: List[int]
    ) -> List[List[int]]:
        n = len(intervals)
        i = 0
        merged = []

        while i < n and intervals[i][1] < newInterval[0]:
            merged.append(intervals[i])
            i += 1

        while i < n and newInterval[1] >= intervals[i][0]:
            newInterval[0] = min(newInterval[0], intervals[i][0])
            newInterval[1] = max(newInterval[1], intervals[i][1])

            i += 1

        merged.append(newInterval)

        while i < n:
            merged.append(intervals[i])
            i += 1

        return merged


"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/insert-interval
* Runtime: 0ms (100.00%)
"""


class Solution2:
    def insert(
        self, intervals: List[List[int]], newInterval: List[int]
    ) -> List[List[int]]:
        intervals.append(newInterval)
        intervals.sort()

        merged = [intervals[0]]

        for i in range(1, len(intervals)):
            if merged[-1][1] >= intervals[i][0]:
                merged[-1][1] = max(merged[-1][1], intervals[i][1])
            else:
                merged.append(intervals[i])

        return merged


"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/insert-interval
* Runtime: 1ms (65.00%)
"""


class Solution3:
    def insert(
        self, intervals: List[List[int]], newInterval: List[int]
    ) -> List[List[int]]:
        intervals.append(newInterval)
        intervals.sort(key=lambda x: x[0])  # sort by start time

        merged = []
        for interval in intervals:
            if not merged or merged[-1][1] < interval[0]:
                merged.append(interval)
            else:
                merged[-1][1] = max(merged[-1][1], interval[1])

        return merged
