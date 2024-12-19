"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/fibonacci-number/
* Runtime: 32ms (82.02%)
"""

class Solution:
    def fib(self, n: int) -> int:
        
        ans: list[int] = []

        for i in range(0, n + 1):
            if i < 2:
                ans.append(i)
            else:
                ans.append(ans[i - 1] + ans[i - 2])
    
        return ans[n]
