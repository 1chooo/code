"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/two-sum/
* Runtime: 0ms (100.00%)
"""

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash_map = {}

        for i in range(len(nums)):
            needed = target - nums[i]
            if needed in hash_map:
                return [hash_map[needed], i]
            hash_map[nums[i]] = i

        return []
