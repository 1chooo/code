"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/maximum-subarray
* Runtime: 87ms (40.43%)
"""


class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        current_sum = max_sum = nums[0]
        for num in nums[1:]:
            current_sum = max(num, current_sum + num)
            max_sum = max(max_sum, current_sum)
        return max_sum


"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/maximum-subarray
* Runtime: 139ms (5.15%)
"""


class Solution2:
    def maxSubArray(self, nums):
        dp = [[0] * len(nums) for i in range(2)]
        dp[0][0], dp[1][0] = nums[0], nums[0]
        for i in range(1, len(nums)):
            dp[1][i] = max(nums[i], nums[i] + dp[1][i - 1])
            dp[0][i] = max(dp[0][i - 1], dp[1][i])
        return dp[0][-1]

"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/maximum-subarray
* Runtime: 85ms (43.22%)
"""


class Solution3:
    def maxSubArray(self, nums):
        current = best = nums[0]
        for num in nums[1:]:
            current = max(num, current + num)
            best = max(best, current)
        return best

