"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/water-bottles
* Runtime: 0ms (100.00%)
"""


class Solution:
    def numWaterBottles(self, numBottles: int, numExchange: int) -> int:
        total_drunk = 0
        empty = 0

        while numBottles > 0:
            total_drunk += numBottles
            empty += numBottles
            numBottles = empty // numExchange
            empty = empty % numExchange

        return total_drunk
