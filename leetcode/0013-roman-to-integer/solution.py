"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem: https://leetcode.com/problems/roman-to-integer/
* Runtime: 0ms (100.00%)
"""

class Solution:
    def romanToInt(self, s: str) -> int:
        roman_dict = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        
        result = 0
        prev_value = 0
        
        for char in s:
            current_value = roman_dict[char]
            result += current_value
            
            if prev_value < current_value:
                result -= 2 * prev_value
                
            prev_value = current_value
        
        return result
