class Solution:
    def convertToTitle(self, columnNumber: int) -> str:

        alpha = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
        result = ''

        while (columnNumber):

            if (columnNumber % 26) == 0:
                result += alpha[25]
                columnNumber -= 26
            else:
                result += alpha[columnNumber % 26]
                columnNumber -= columnNumber % 26
            columnNumber /= 26

        return result[-1]


if __name__ == '__main__':

    columnNumber = int(input())
    print(Solution.convertToTitle(columnNumber))