"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: 
* Runtime: 0ms (100.00%)
"""

class Solution:
    def addBinary(self, a: str, b: str) -> str:
        ans: str = ""
        i: int = len(a) - 1
        j: int = len(b) - 1
        carry: int = 0

        while (i >= 0 or j >= 0 or carry):
            if i >= 0:
                carry += int(a[i])
                i -= 1
            if j >= 0:
                carry += int(b[j])
                j -= 1

            ans += str(carry % 2)
            carry //= 2

        return ans[::-1]
