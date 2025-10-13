"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/binary-search
* Runtime: 0ms (100.00%)
"""


class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left, right = 0, len(nums) - 1

        while left <= right:
            mid = left + (right - left) // 2

            if nums[mid] == target:
                return mid
            elif nums[mid] < target:
                left = mid + 1
            else:
                right = mid - 1

        return -1
