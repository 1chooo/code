"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
* Runtime: 87ms (58.31%)
"""


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy_price = prices[0]
        max_profit = 0

        for i in range(1, len(prices)):
            if prices[i] < buy_price:
                # if we find a smaller buy price than we update the buy price
                buy_price = prices[i]
            else:
                # else we calculate the profit since we found a larger price than the buy price
                max_profit = max(max_profit, prices[i] - buy_price)

        return max_profit


class Solution2:
    def maxProfit(self, prices: List[int]) -> int:
        min_price = float("inf")
        max_profit = 0

        for price in prices:
            min_price = min(min_price, price)
            max_profit = max(max_profit, price - min_price)

        return max_profit
