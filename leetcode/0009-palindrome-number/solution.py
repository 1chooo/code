"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/palindrome-number
* Runtime: 7ms (62.20%)
"""

class Solution:
    def isPalindrome(self, x: int) -> bool:
        if (x < 0):
            return False
        
        reversed_number: int = 0
        temp: int = x

        while (temp != 0):
            digit: int = temp % 10
            reversed_number = reversed_number * 10 + digit
            temp = temp // 10

        return x == reversed_number
