class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hMap = {}
        
        for i in range(len(nums)):
            if nums[i] in hMap:
                return [hMap[nums[i]], i]
            else:
                hMap[target - nums[i]] = i

        return []


# author: Shin0517
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
