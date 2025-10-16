"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/house-robber/
* Runtime: 0ms (100.00%)
"""


class Solution:
    def rob(self, nums: List[int]) -> int:
        n = len(nums)

        if n == 0:
            return 0
        if n == 1:
            return nums[0]

        dp = [0] * (n + 1)
        dp[1] = nums[0]

        for i in range(2, n + 1):
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i - 1])

        return dp[n]
