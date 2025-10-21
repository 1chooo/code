"""
* Author: Lin Hugo<hugo@1chooo.com>
* Problem: https://leetcode.com/problems/integer-to-english-words
* Runtime: 0ms (100.00%)
"""


class Solution:
    def numberToWords(self, num: int) -> str:
        if num == 0:
            return "Zero"

        below_20 = [
            "",
            "One",
            "Two",
            "Three",
            "Four",
            "Five",
            "Six",
            "Seven",
            "Eight",
            "Nine",
            "Ten",
            "Eleven",
            "Twelve",
            "Thirteen",
            "Fourteen",
            "Fifteen",
            "Sixteen",
            "Seventeen",
            "Eighteen",
            "Nineteen",
        ]

        tens = [
            "",
            "",
            "Twenty",
            "Thirty",
            "Forty",
            "Fifty",
            "Sixty",
            "Seventy",
            "Eighty",
            "Ninety",
        ]

        def helper(n: int) -> str:
            if n == 0:
                return ""
            elif n < 20:
                return below_20[n] + " "
            elif n < 100:
                return tens[n // 10] + " " + helper(n % 10)
            elif n < 1000:
                return below_20[n // 100] + " Hundred " + helper(n % 100)
            elif n < 1_000_000:
                return helper(n // 1000) + "Thousand " + helper(n % 1000)
            elif n < 1_000_000_000:
                return helper(n // 1_000_000) + "Million " + helper(n % 1_000_000)
            else:
                return (
                    helper(n // 1_000_000_000) + "Billion " + helper(n % 1_000_000_000)
                )

        return helper(num).strip()
