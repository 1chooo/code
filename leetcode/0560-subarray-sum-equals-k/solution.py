"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/subarray-sum-equals-k
* Runtime: 30ms (80.98%)
"""

from typing import List


class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        prefix = 0
        count = 0
        seen = {0: 1}

        for num in nums:
            prefix += num
            count += seen.get(prefix - k, 0)
            seen[prefix] = seen.get(prefix, 0) + 1

        return count
