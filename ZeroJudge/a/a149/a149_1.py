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
        while m:            # 當 m 不為 0 時，就會一直執行
            ans *= m % 10   # 得到個位數
            m //= 10        # 去掉個位數
    
    print(ans)
