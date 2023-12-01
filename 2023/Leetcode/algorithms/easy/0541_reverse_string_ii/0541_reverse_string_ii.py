"""
Created Date: 2023/12/01
Author: @1chooo (Hugo ChunHo Lin)
Status: Accepted
"""

class Solution:
    def reverseStr(self, s: str, k: int) -> str:
        # Convert the string into a list to modify characters
        s_list = list(s)
        
        # Iterate through the string with steps of 2k
        for i in range(0, len(s), 2*k):
            # Reverse the first k characters within each 2k block
            s_list[i:i+k] = reversed(s_list[i:i+k])
            print(''.join(s_list))
        
        # Convert the modified list back to a string
        return ''.join(s_list)

if __name__ == '__main__':
    solution = Solution()
    print(solution.reverseStr("abcdefg", 8))
