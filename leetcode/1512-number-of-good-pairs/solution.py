"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/number-of-good-pairs/
* Runtime: 0ms (100.00%)
"""


class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        good_pairs_num = 0

        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                if nums[i] == nums[j]:
                    good_pairs_num += 1

        return good_pairs_num


"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/number-of-good-pairs/
* Runtime: 0ms (100.00%)
"""


class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        pairs = {}
        count = 0

        for i in range(len(nums)):
            if nums[i] in pairs:
                count += pairs[nums[i]]

            pairs[nums[i]] = pairs.get(nums[i], 0) + 1

        return count
