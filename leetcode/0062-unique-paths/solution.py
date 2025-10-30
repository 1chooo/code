"""
* Author: Lin Hugo <hugo@1chooo.com>
* Problem: https://leetcode.com/problems/unique-paths
* Runtime: 0ms (100.00%)
"""


class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        dp = [[1] * n for _ in range(m)]

        for i in range(1, m):
            for j in range(1, n):
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1]

        return dp[-1][-1]
