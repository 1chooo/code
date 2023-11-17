"""
Created Date: 2023-11-17
Author: @1chooo (Hugo ChunHo Lin)
Problem link: https://zerojudge.tw/ShowProblem?problemid=a149
Status: AC
"""

n = int(input())

for i in range(n):
    m = int(input())

    if m == 0:
        ans = 0
    else:
        ans = 1
        while m:
            ans *= m % 10
            m //= 10
    
    print(ans)
