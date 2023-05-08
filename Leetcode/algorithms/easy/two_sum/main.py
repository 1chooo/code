from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        # Base Case
        if len(nums) == 2:
            return [0, 1]
        
        # a + b = c
        # c - b = a
        
        hMap = {}
        
        for i in range(len(nums)):
            if nums[i] in hMap:
                return [hMap[nums[i]], i]
            else:
                hMap[target - nums[i]] = i

def main():
    sol = Solution()
    nums = [2, 7, 11, 15]
    target = 9
    result = sol.twoSum(nums, target)
    print(result)

if __name__ == "__main__":
    main()
