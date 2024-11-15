"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/longest-common-prefix/
* Runtime: 0ms (100.00%)
"""

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""

        prefix = strs[0]  # Start with the first string as the initial prefix

        for string in strs[1:]:
            while string.find(prefix) != 0:  # Keep checking until the prefix matches the beginning of the string
                prefix = prefix[:-1]  # Reduce the prefix by one character
                if not prefix:  # If the prefix becomes empty, no common prefix exists
                    return ""
        
        return prefix
