"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/k-closest-points-to-origin
* Runtime: 55ms (83.77%)
"""

import heapq
from typing import List


class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        max_heap = []

        for x, y in points:
            dist = -(x * x + y * y)  # use negative to simulate max-heap
            if len(max_heap) < k:
                heapq.heappush(max_heap, (dist, [x, y]))
            else:
                heapq.heappush(max_heap, (dist, [x, y]))
                heapq.heappop(max_heap)  # remove the farthest point

        return [point for _, point in max_heap]


"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/k-closest-points-to-origin
* Runtime: 75ms (47.40%)
"""


class Solution2:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        min_heap = []

        for x, y in points:
            dist = x * x + y * y
            heapq.heappush(min_heap, (dist, [x, y]))

        # pop k smallest distances
        result = []
        for _ in range(k):
            result.append(heapq.heappop(min_heap)[1])  # deleteMin

        return result
