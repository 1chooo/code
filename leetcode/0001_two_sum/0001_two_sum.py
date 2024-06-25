class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hMap = {}
        
        for i in range(len(nums)):
            if nums[i] in hMap:
                return [hMap[nums[i]], i]
            else:
                hMap[target - nums[i]] = i

        return []
