"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/water-bottles
* Runtime: 26ms (98.62%)
"""


class Solution:
    def maxBottlesDrunk(self, numBottles: int, numExchange: int) -> int:
        total_drunk = 0
        empty = 0

        while numBottles > 0:
            total_drunk += numBottles
            empty += numBottles

            numBottles = 0

            if empty >= numExchange:
                empty -= numExchange
                numBottles += 1
                numExchange += 1
            else:
                break

        return total_drunk
