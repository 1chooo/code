"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/valid-palindrome/
* Runtime: 7ms (82.16%)
"""


class Solution:
    def isPalindrome(self, s: str) -> bool:
        filtered = []
        for ch in s:
            if ch.isalnum():  # 0 <= ch <= 9 or 'a' <= ch <= 'z' or 'A' <= c <= 'Z'
                filtered.append(ch.lower())

        i = 0
        j = len(filtered) - 1
        while i < j:
            if filtered[i] != filtered[j]:
                return False
            i += 1
            j -= 1

        return True

"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/valid-palindrome/
* Runtime: 11ms (34.80%)
"""

class Solution2:
    def isPalindrome(self, s: str) -> bool:
        def helper(left, right):
            while left < right and not s[left].isalnum():
                left += 1
            while left < right and not s[right].isalnum():
                right -= 1
            if left >= right:
                return True
            if s[left].lower() != s[right].lower():
                return False
            return helper(left + 1, right - 1)

        return helper(0, len(s) - 1)
