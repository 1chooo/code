"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem link: https://zerojudge.tw/ShowProblem?problemid=a009
* Status: AC
"""

# k = 7 because J -> C, K -> D

inputString = str(input())

answer = ""
for i in inputString:
    # print(ord(i))
    temp = ord(i) - 7
    # print(temp)
    answer += chr(temp)

print(answer)