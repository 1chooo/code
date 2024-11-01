"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/delete-characters-to-make-fancy-string
* Runtime: 289ms (70.27%)
"""

class Solution:
    def makeFancyString(self, s: str) -> str:
        if not s:
            return ""

        res = [s[0]]
        count = 1

        for i in range(1, len(s)):
            if s[i] != s[i - 1]:
                count = 1
                res.append(s[i])
            else:
                count += 1
                if count < 3:
                    res.append(s[i])

        return ''.join(res)
