"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/two-sum/
* Runtime: 0ms (100.00%)
"""

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash_map = {}
        
        for i in range(len(nums)):
            if nums[i] in hash_map:
                return [hash_map[nums[i]], i]
            hash_map[target - nums[i]] = i

        return []

"""
* Author: Shin0517
* Problem: https://leetcode.com/problems/two-sum/
* Runtime: 
"""

class Solution(object):
    def twoSum(self, nums, target):
        numDict = {}
        n = len(nums)

        for i in range(n):
            complement = target - nums[i]
            if complement in numDict:
                return [numDict[complement], i]
            else: 
                numDict[nums[i]] = i

        return []
