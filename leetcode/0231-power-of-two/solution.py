"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/power-of-two
* Runtime: 0ms (100.00%)
"""

class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        return n > 0 and n & (n - 1) == 0
