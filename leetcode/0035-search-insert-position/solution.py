"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/search-insert-position/
* Runtime: 0ms (100.00%)
"""

class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        left: int = 0,
        right: int = len(nums) - 1

        while left <= right:
            middle = (left + right) // 2

            if nums[middle] == target:
                return middle

            if nums[middle] < target:
                left = middle + 1
            else:
                right = middle - 1

        return left