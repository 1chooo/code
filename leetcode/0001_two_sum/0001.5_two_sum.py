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
