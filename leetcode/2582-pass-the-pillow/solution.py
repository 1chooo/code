"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/pass-the-pillow/
* Runtime: 0ms (100.00%)
"""

class Solution:
    def passThePillow(self, n: int, time: int) -> int:
        if ((time // (n - 1) & 1) != 0):
            return n - time % (n - 1)
        
        return time % (n - 1) + 1
