"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/string-compression-iii
* Runtime: 153ms (87.94%)
"""

class Solution:
    def compressedString(self, word: str) -> str:
        result: str = ""
        count: int = 1
        word_len: int = len(word)
        comp: str = word[0]

        for i in range(1, word_len):
            if comp == word[i] and count < 9:
                count += 1
            else:
                result += str(count) + comp
                comp = word[i]
                count = 1

        result += str(count) + comp

        return result
