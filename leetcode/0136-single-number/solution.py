"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/single-number
* Runtime: 0ms (100.00%)
"""

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        result: int = 0

        for num in nums:
            result ^= num

        return result