"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/substring-with-concatenation-of-all-words
* Runtime: 23ms (79.10%)
"""

from typing import List
from collections import Counter


class Solution:
    def findSubstring(self, s: str, words: List[str]) -> List[int]:
        if not s or not words:
            return []

        word_len = len(words[0])
        num_words = len(words)
        s_len = len(s)

        word_counts = Counter(words)
        result = []

        for i in range(word_len):
            left = i
            right = i
            current_counts = Counter()
            count = 0

            while right + word_len <= s_len:
                w = s[right : right + word_len]
                right += word_len

                if w in word_counts:
                    current_counts[w] += 1
                    count += 1

                    while current_counts[w] > word_counts[w]:
                        left_w = s[left : left + word_len]
                        left += word_len
                        current_counts[left_w] -= 1
                        count -= 1

                    if count == num_words:
                        result.append(left)
                else:
                    current_counts.clear()
                    count = 0
                    left = right

        return result
