"""
Created Date: 2023/10/25
Author: @1chooo (Hugo ChunHo Lin)
Problem link: https://zerojudge.tw/ShowProblem?problemid=e273
Status: 
"""

n = int(input())

coefficients = list(map(int, input().split(' ')))

for i in range(n - 1):
    if i == n - 2:
        print(coefficients[i] * (n - i - 1), end=' ')
    else:
        print(coefficients[i] * (n - i - 1), end=' ')
