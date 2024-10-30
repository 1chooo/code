"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/find-the-number-of-subsequences-with-equal-gcd
* Runtime: 2898ms (65.65%)
"""

gcd_cache = [[0] * (200 + 1) for _ in range(200 + 1)]

for i in range(200 + 1):
    for j in range(1, 200 + 1):
        res = gcd(i, j)
        gcd_cache[i][j] = res
        gcd_cache[j][i] = res

class Solution:
    def subsequencePairCount(self, nums: List[int]) -> int:
        MODULO = 10 ** 9 + 7

        @cache
        def solve(i: int, g1: int, g2: int) -> int:
            if i == len(nums):
                return 1 if g1 == g2 and g2 == g1 else 0
            
            res1 = solve(i + 1, g1, g2)
            res2 = solve(i + 1, gcd_cache[g1][nums[i]], g2)
            res3 = solve(i + 1, g1, gcd_cache[g2][nums[i]])
            return (res1 + res2 + res3) % MODULO
        
        return (solve(0, 0, 0) - 1) % MODULO

"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/find-the-number-of-subsequences-with-equal-gcd
* Runtime: 4950ms (16.08%)
"""

class Solution:
    def subsequencePairCount(self, nums: List[int]) -> int:
        MODULO = 10 ** 9 + 7
        gcd_cache = [[0] * (200 + 1) for _ in range(200 + 1)]

        for i in range(200 + 1):
            for j in range(1, 200 + 1):
                res = gcd(i, j)
                gcd_cache[i][j] = res
                gcd_cache[j][i] = res

        @cache
        def solve(i: int, g1: int, g2: int) -> int:
            if i == len(nums):
                return 1 if g1 == g2 and g2 == g1 else 0
            
            res1 = solve(i + 1, g1, g2)
            res2 = solve(i + 1, gcd_cache[g1][nums[i]], g2)
            res3 = solve(i + 1, g1, gcd_cache[g2][nums[i]])
            return (res1 + res2 + res3) % MODULO
        
        return (solve(0, 0, 0) - 1) % MODULO



"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/find-the-number-of-subsequences-with-equal-gcd
* Runtime: TLE
"""

class Solution:
    """
    if we write dp cache by our own, it will lead to TLE
    """
    def subsequencePairCount(self, nums: List[int]) -> int:
        MODULO = 10 ** 9 + 7
        dp = [[[-1] * (200 + 1) for _ in range(200 + 1)] for _ in range(200)]
        gcd_cache = [[0] * (200 + 1) for _ in range(200 + 1)]

        for i in range(200 + 1):
            for j in range(1, 200 + 1):
                res = gcd(i, j)
                gcd_cache[i][j] = res
                gcd_cache[j][i] = res

        @cache
        def solve(i: int, g1: int, g2: int) -> int:
            if i == len(nums):
                return 1 if g1 == g2 and g2 == g1 else 0
            if dp[i][g1][g2] != -1:
                return dp[i][g1][g2]
            res1 = solve(i + 1, g1, g2)
            res2 = solve(i + 1, gcd_cache[g1][nums[i]], g2)
            res3 = solve(i + 1, g1, gcd_cache[g2][nums[i]])
            dp[i][g1][g2] = (res1 + res2 + res3) % MODULO
            return dp[i][g1][g2]
        
        return (solve(0, 0, 0) - 1) % MODULO
    

