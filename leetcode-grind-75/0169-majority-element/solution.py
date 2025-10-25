"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/majority-element
* Runtime: 11ms (28.81%)
"""


class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        count_map = {}
        n = len(nums)

        for num in nums:
            count_map[num] = count_map.get(num, 0) + 1

            if count_map[num] > n // 2:
                return num

        return -1


"""
* Author: Lin Hugo <hugo@1chooo.com>
* Problem: https://leetcode.com/problems/majority-element
* Runtime: 74ms (6.06%)
"""


class Solution2:
    def majorityElement(self, nums: List[int]) -> int:
        def majority(low: int, high: int) -> int:
            # Base case: only one element
            if low == high:
                return nums[low]

            mid = (high - low) // 2 + low
            left = majority(low, mid)
            right = majority(mid + 1, high)

            # If both halves agree
            if left == right:
                return left

            # Otherwise, count occurrences of each in the current range
            left_count = sum(1 for i in range(low, high + 1) if nums[i] == left)
            right_count = sum(1 for i in range(low, high + 1) if nums[i] == right)

            return left if left_count > right_count else right

        return majority(0, len(nums) - 1)
