"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/final-value-of-variable-after-performing-operations
* Runtime: 0ms (100.00%)
"""


class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        value = 0

        for operation in operations:
            if operation[1] == "+":
                value += 1
            else:
                value -= 1

        return value
