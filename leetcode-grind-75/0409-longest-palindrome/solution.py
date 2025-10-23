"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/longest-palindrome
* Runtime: 0ms (100.00%)
"""


class Solution:
    def longestPalindrome(self, s: str) -> int:
        if len(s) == 1:
            return 1

        s_hash = {}
        for char in s:
            s_hash[char] = s_hash.get(char, 0) + 1

        palindrome_len = 0
        odd_found = False

        for count in s_hash.values():
            if count % 2 == 0:
                palindrome_len += count
            else:
                palindrome_len += count - 1
                odd_found = True

        if odd_found:
            palindrome_len += 1

        return palindrome_len
