"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/plus-one/description/
* Runtime: 0ms (100.00%)
"""

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        n = len(digits)
        for i in range(n - 1, -1, -1):
            if digits[i] < 9:
                digits[i] += 1
                return digits
            digits[i] = 0
        return [1] + digits