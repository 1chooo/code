"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/sqrtx
* Runtime: 3ms (62.44%)
"""

class Solution:
    def mySqrt(self, x: int) -> int:
        l: int = 0
        r: int = x

        while (l < r):
            mid: int = (l + r + 1) // 2
            if mid * mid <= x:
                l = mid
            else:
                r = mid - 1

        return l