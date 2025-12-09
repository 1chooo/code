"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/word-ladder
* Runtime: 35ms (97.04%)
"""

from typing import List

class Solution:
    def ladderLength(self, beginWord: str, endWord: str, wordList: List[str]) -> int:
        if endWord not in wordList:
            return 0
        
        wordSet = set(wordList)
        beginSet = {beginWord}
        endSet = {endWord}
        visited = set()
        wordLen = len(beginWord)
        length = 1

        while beginSet and endSet:
            if len(beginSet) > len(endSet):
                beginSet, endSet = endSet, beginSet
            
            nextBeginSet = set()
            for word in beginSet:
                for i in range(wordLen):
                    for c in 'abcdefghijklmnopqrstuvwxyz':
                        newWord = word[:i] + c + word[i+1:]
                        if newWord in endSet:
                            return length + 1
                        if newWord in wordSet and newWord not in visited:
                            visited.add(newWord)
                            nextBeginSet.add(newWord)
            beginSet = nextBeginSet
            length += 1

        return 0