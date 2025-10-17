"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
* Runtime: 0ms (100.00%)
"""


class Solution:
    def findMin(self, nums: List[int]) -> int:
        n = len(nums)
        low = 0
        high = n - 1

        while low < high:
            mid = (low + high) // 2

            if nums[mid] > nums[high]:
                low = mid + 1
            else:
                high = mid

        return nums[low]
