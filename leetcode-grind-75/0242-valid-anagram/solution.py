"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/valid-anagram
* Runtime: 11ms (72.15%)
"""


class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        freq = [0] * 26

        for i in range(len(s)):
            freq[ord(s[i]) - ord("a")] += 1
            freq[ord(t[i]) - ord("a")] -= 1

        for i in range(26):
            if freq[i] != 0:
                return False

        return True


"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/valid-anagram
* Runtime: 15ms (41.35%)
"""


class Solution2:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        count_s = [0] * 26
        count_t = [0] * 26

        for i in range(len(s)):
            count_s[ord(s[i]) - ord("a")] += 1
            count_t[ord(t[i]) - ord("a")] += 1

        return count_s == count_t
