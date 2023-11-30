from typing import List

class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        n = len(s)
        for i in range(n // 2):
            tmp = s[i]
            s[i] = s[n - 1 - i]
            s[n - 1 - i] = tmp

def reverse_in_place(s):
    n = len(s)
    for i in range(n // 2):
        tmp = s[i]
        s[i] = s[n - 1 - i]
        s[n - 1 - i] = tmp

# Example usage:
arr = [1, 2, 3, 4, 5]
reverse_in_place(arr)
print(arr)  # Output: [5, 4, 3, 2, 1]
