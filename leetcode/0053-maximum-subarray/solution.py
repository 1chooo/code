"""
* Author: Lin Hugo <hugo@1chooo.com>
* Problem: https://leetcode.com/problems/maximum-subarray
* Runtime: 54ms (69.87%)
"""


class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        res = nums[0]
        total = nums[0]

        for i in range(1, len(nums)):
            if total < 0:
                total = 0

            total += nums[i]
            res = max(total, res)

        return res
