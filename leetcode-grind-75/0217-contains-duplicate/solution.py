"""
* Author: Lin Hugo <hugo@1chooo.com>
* Problem: https://leetcode.com/problems/contains-duplicate
* Runtime: 20ms (25.81%)
"""


class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        nums_map = {}

        for num in nums:
            if num in nums_map:
                return True
            nums_map[num] = nums_map.get(num, 0) + 1

        return False
