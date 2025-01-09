"""
Created Date: 2023-11-17
Author: @1chooo (Hugo ChunHo Lin)
Problem link: https://zerojudge.tw/ShowProblem?problemid=j605
Status: AC
"""

if __name__ == "__main__":

    n = int(input())
    t = [0] * n
    s = [0] * n

    for i in range(n):
        x, y = map(int, input().split())
        t[i] = x
        s[i] = y

    ans = max(s) - n - s.count(-1) * 2

    if ans < 0:
        ans = 0

    print(ans, t[s.index(max(s))])
