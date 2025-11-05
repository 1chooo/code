"""
* Author: Lin Hugo <hugo@1chooo.com>
* Problem: https://leetcode.com/problems/relative-ranks
* Runtime: 3ms (92.70%)
"""

from typing import List


class Solution:
    def __init__(self):
        self.rank_strings = ["Gold Medal", "Silver Medal", "Bronze Medal"]

    def findRelativeRanks(self, score: List[int]) -> List[str]:
        sorted_scores = sorted(score, reverse=True)
        score_to_rank = {}

        for i, s in enumerate(sorted_scores):
            if i < 3:
                score_to_rank[s] = self.rank_strings[i]
            else:
                score_to_rank[s] = str(i + 1)

        return [score_to_rank[s] for s in score]
