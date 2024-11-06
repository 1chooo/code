"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string
* Runtime: 0ms (100.00%)
"""

class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        needle_len: int = len(needle)
        haystack_len: int = len(haystack)

        if (haystack == needle):
            return 0
        
        for i in range(haystack_len):
            if haystack[i:i + needle_len] == needle:
                return i
            
        return -1
