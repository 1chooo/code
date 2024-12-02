"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/check-if-n-and-its-double-exist/
* Runtime: 0ms (100.00%)
"""

class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        seen: set = set()

        for num in arr:
            if (2 * num in seen or 
                (num % 2 == 0 and num // 2 in seen)):
                return True
            seen.add(num)

        return False
