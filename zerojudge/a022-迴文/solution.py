"""
Created Date: 2023-11-18
Author: @1chooo (Hugo ChunHo Lin)
Problem link: https://zerojudge.tw/ShowProblem?problemid=a149
Status: AC
"""

# method 1
a = input()

if a == a[::-1]:
    print('yes')
else:
    print('no')

# method 2
a = list(input())
b = a.copy()
b.reverse()

if a == b:
    print('yes')
else:
    print('no')
