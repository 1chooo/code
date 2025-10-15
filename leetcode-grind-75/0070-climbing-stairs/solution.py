"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/climbing-stairs
* Runtime: 0ms (100.00%)
"""


class Solution:
    def climbStairs(self, n: int) -> int:
        if n == 0 or n == 1:
            return 1

        dp = [0] * (n + 1)
        dp[0] = dp[1] = 1

        for i in range(2, n + 1):
            dp[i] = dp[i - 1] + dp[i - 2]

        return dp[n]


"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/climbing-stairs
* Runtime: 0ms (100.00%)
"""


class Solution2:
    def climbStairs(self, n: int) -> int:
        if n <= 1:
            return 1

        a, b = 1, 1

        for _ in range(2, n + 1):
            a, b = b, a + b

        return b


"""
* Author: 1chooo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/climbing-stairs
* Runtime: TLE
"""


class TLESolution:
    def climbStairs(self, n: int) -> int:
        if n == 0 or n == 1:
            return 1

        return self.climbStairs(n - 1) + self.climbStairs(n - 2)
