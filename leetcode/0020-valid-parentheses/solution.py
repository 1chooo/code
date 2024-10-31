"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/valid-parentheses
* Runtime: 0ms (100.00%)
"""

class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        table = {')': '(', '}': '{', ']': '['}
        for char in s:
            if char in table:
                if not stack or stack.pop() != table[char]:
                    return False
            else:
                stack.append(char)
        return not stack
