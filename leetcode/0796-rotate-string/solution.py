"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/rotate-string
* Runtime: 0ms (100.00%)
"""

class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        if (len(s) != len(goal)):
            return False
        
        return goal in s + s
    
"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/rotate-string
* Runtime: 0ms (100.00%)
"""

class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        if (len(s) != len(goal)):
            return False
        
        rotated: str = s

        for _ in range(len(s)):
            rotated = rotated[1:] + rotated[0]
            if (rotated == goal):
                return True
            
        return False
