"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/largest-3-same-digit-number-in-string
* Runtime: 0ms (100.00%)
"""


class Solution:
    def largestGoodInteger(self, num: str) -> str:
        max_good = ""
        for i in range(len(num) - 2):
            if num[i] == num[i + 1] == num[i + 2]:
                max_good = max(max_good, num[i : i + 3])
        return max_good
