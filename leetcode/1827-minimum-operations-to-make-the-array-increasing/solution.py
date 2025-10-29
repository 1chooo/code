"""
* Author: Lin Hugo <hugo@1chooo.com>
* Problem: https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/
* Runtime: 106ms (60.96%)
"""

from typing import List


class Solution:
    def minOperations(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return 0

        count = 0

        for i in range(len(nums) - 1):
            if nums[i] >= nums[i + 1]:
                increment = (nums[i] - nums[i + 1]) + 1
                count += increment
                nums[i + 1] += increment

        return count


if __name__ == "__main__":
    solution = Solution()
    solution.minOperations([1,5,2,4,1])
