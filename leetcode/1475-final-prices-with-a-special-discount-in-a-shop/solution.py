"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
* Runtime: 3ms (54.81%)
"""

class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
        stack = []

        for i, price in enumerate(prices):
            while stack and prices[stack[-1]] >= price:
                prices[stack.pop()] -= price
            stack.append(i)

        return prices
