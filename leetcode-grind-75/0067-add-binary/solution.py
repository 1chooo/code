"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/add-binary
* Runtime: 0ms (100.00%)
"""


class Solution:
    def addBinary(self, a: str, b: str) -> str:
        carry = 0
        sum = ""
        a_index = len(a) - 1
        b_index = len(b) - 1

        while a_index >= 0 or b_index >= 0 or carry:
            if a_index >= 0:
                carry += int(a[a_index])

            if b_index >= 0:
                carry += int(b[b_index])

            sum = str(carry % 2) + sum
            carry //= 2

            a_index -= 1
            b_index -= 1

        return sum
