"""
Created Date: 2023-10-28
Author: @1chooo (Hugo ChunHo Lin)
Problem link: https://zerojudge.tw/ShowProblem?problemid=a104
Status: 
"""

while True:
    try:
        n = int(input())
        a = [int(x) for x in input().split()]
        a.sort()
        print(*a)
    except EOFError:
        break
