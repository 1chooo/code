"""
Created Date: 2023-10-28
Author: @1chooo (Hugo ChunHo Lin)
Problem link: https://zerojudge.tw/ShowProblem?problemid=f345
Status: 
"""

n = int(input())
# a = [int(x) for x in input().split()]
a = list(map(int, input().split()))

for i in a[::-1]:
    print(i, end=" ")

print()

# print(*a[::-1])
