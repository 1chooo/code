"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful
* Runtime: 15ms (97.30%)
"""

class Solution:
    def minChanges(self, s: str) -> int:
        count: int = 0

        for i in range(0, len(s) - 1, 2):
            if s[i] != s[i + 1]:
                count += 1

        return count

"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful
* Runtime: 27ms (29.73%)
"""

class Solution:
    def minChanges(self, s: str) -> int:
        count: int = 0
        i: int = 0

        while i < len(s) - 1:
            if s[i] != s[i + 1]:
                count += 1
            i += 2

        return count