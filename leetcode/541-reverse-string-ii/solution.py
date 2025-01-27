"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/reverse-string-ii/
* Runtime: 17ms (7.09%)
"""


class Solution:
    def reverseStr(self, s: str, k: int) -> str:
        s_list = list(s)

        for i in range(0, len(s), 2 * k):
            s_list[i : i + k] = reversed(s_list[i : i + k])
            print("".join(s_list))

        return "".join(s_list)
