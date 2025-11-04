"""
* Author: Lin Hugo <hugo@1chooo.com>
* Problem: https://leetcode.com/problems/array-partition
* Runtime: 22ms (87.42%)
"""

from typing import List


class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        nums.sort()

        sum = 0

        for i in range(0, len(nums), 2):
            sum += nums[i]

        return sum
