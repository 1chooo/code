"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/longest-square-streak-in-an-array
* Runtime: 107ms (72.97%)
"""

class Solution:
    def longestSquareStreak(self, nums: List[int]) -> int:
        nums.sort()
        visited = {}
        longest_length = -1

        for num in nums:
            sqrt_num = sqrt(num)
            if sqrt_num in visited:
                visited[num] = visited[sqrt_num] + 1
                longest_length = max(longest_length, visited[num])
            else:
                visited[num] = 1

        return longest_length
