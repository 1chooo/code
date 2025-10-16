"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/coin-change
* Runtime: 700ms (82.93%)
"""


class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        dp = [float("inf")] * (amount + 1)
        dp[0] = 0

        for coin in coins:
            for i in range(coin, amount + 1):
                dp[i] = min(dp[i], dp[i - coin] + 1)

        return dp[amount] if dp[amount] != float("inf") else -1
