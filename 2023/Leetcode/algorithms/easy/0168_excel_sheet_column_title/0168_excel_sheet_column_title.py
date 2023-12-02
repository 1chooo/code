class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        alpha = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
        result = ''

        while columnNumber > 0:
            if columnNumber % 26 == 0:
                result += 'Z'
                columnNumber = columnNumber // 26 - 1
            else:
                result += alpha[(columnNumber % 26) - 1]
                columnNumber //= 26

        return result[::-1]  # Reverse the result string before returning
    
class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        result = ''
        while columnNumber > 0:
            columnNumber -= 1  # Adjust to start from 0 instead of 1
            remainder = columnNumber % 26  # Get the remainder after dividing by 26
            result = chr(remainder + ord('A')) + result  # Convert remainder to corresponding letter
            columnNumber //= 26  # Update columnNumber for the next iteration
        return result


if __name__ == '__main__':
    solution = Solution()
    print(solution.convertToTitle(columnNumber=28))