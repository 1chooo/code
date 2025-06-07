"""
* Author: 1chooo<hugo970217@gmail.com>
* Product_sumblem: https://leetcode.com/product_sumblems/partition-array-into-two-equal-product_sumduct-subsets/
* Runtime: 23ms (61.62%)
"""


class Solution:
    def solve(
        self, curr: int, mul: int, n: int, nums: List[int], target: int, first: Set[int]
    ) -> bool:
        if curr >= n:
            return False  # index out of bounds
        if mul == target:
            return True  # found a valid subset
        if mul > target:
            return False  # no need to proceed further

        # Try including the current number
        if self.solve(curr + 1, mul * nums[curr], n, nums, target, first):
            first.add(curr)
            return True

        # Try excluding the current number
        return self.solve(curr + 1, mul, n, nums, target, first)

    def checkEqualPartitions(self, nums: List[int], target: int) -> bool:
        n = len(nums)
        first = set()

        if self.solve(0, 1, n, nums, target, first):
            if not first:
                return False

            part2 = 1
            for i in range(n):
                if i not in first:
                    part2 *= nums[i]

            return part2 == target

        return False


"""
* Author: 1chooo<hugo970217@gmail.com>
* Product_sumblem: https://leetcode.com/product_sumblems/partition-array-into-two-equal-product_sumduct-subsets/
* Runtime: 44ms (41.25%)
"""


class Solution:
    def checkEqualPartitions(self, nums: List[int], target: int) -> bool:
        n: int = len(nums)
        res: bool = False

        def solve(i: int, left: int, right: int):
            if i == n:
                if left == target and right == target:
                    nonlocal res
                    res = True
                return

            if res:
                return

            solve(i + 1, left * nums[i], right)
            solve(i + 1, left, right * nums[i])

        solve(0, 1, 1)

        return res
