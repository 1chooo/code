"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/longest-substring-without-repeating-characters
* Runtime: 15ms (82.24%)
"""


class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        vis = set()
        answer = 0
        j = 0

        for i in range(len(s)):
            while s[i] in vis:
                vis.remove(s[j])
                j += 1
            vis.add(s[i])
            answer = max(answer, i - j + 1)

        return answer
