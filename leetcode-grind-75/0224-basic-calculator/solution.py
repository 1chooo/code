"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/basic-calculator
* Runtime: 39ms (96.97%)
"""


class Solution:
    def calculate(self, s: str) -> int:
        stack = []
        current_number = 0
        current_result = 0
        sign = 1  # 1 means positive, -1 means negative

        for char in s:
            if char.isdigit():
                current_number = current_number * 10 + int(char)
            elif char in "+-":
                current_result += sign * current_number
                current_number = 0
                if char == "+":
                    sign = 1
                else:
                    sign = -1
            elif char == "(":
                stack.append(current_result)
                stack.append(sign)
                current_result = 0
                sign = 1
            elif char == ")":
                current_result += sign * current_number
                current_number = 0
                current_result *= stack.pop()  # pop the sign
                current_result += stack.pop()  # pop the result

        current_result += sign * current_number
        return current_result