"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/circular-sentence
* Runtime: 0ms (100.00%)
"""

class Solution:
    def isCircularSentence(self, sentence: str) -> bool:
        sentence_len: int = len(sentence)

        if (sentence[0] != sentence[-1]):
            return False
        
        for i in range(1, sentence_len):
            if (sentence[i] == ' ' and 
                sentence[i - 1] != sentence[i + 1]):
                return False
            
        return True
