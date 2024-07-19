"""
Created Date: 2023-11-20
Author: @1chooo (Hugo ChunHo Lin)
Problem link: https://zerojudge.tw/ShowProblem?problemid=a149
Status: AC
"""

n = int(input())

for i in range(n):
    num = [int(x) for x in list(input())]
    ans = 1

    for j in num:
        ans *= j
    
    print(ans)