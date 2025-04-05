"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/reverse-string/
* Runtime: 0ms (100.00%)
"""


class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        left = 0
        right = len(s) - 1

        while left < right:
            s[left], s[right] = s[right], s[left]
            left += 1
            right -= 1


"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/reverse-string/
* Runtime: 3ms (43.52%)
"""


class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        
        for i in range(len(s) // 2):
            s[i], s[-(i + 1)] = s[-(i + 1)], s[i]