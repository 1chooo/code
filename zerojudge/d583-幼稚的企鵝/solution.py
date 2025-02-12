"""
Author: 1chooo<hugo970217@gmail.com>
Problem link: https://zerojudge.tw/ShowProblem?problemid=d583
Status: AC
"""

if __name__ == "__main__":
    while True:
        try:
            n = int(input())
            a = [int(x) for x in input().split()]
            a.sort()
            print(*a)
        except EOFError:
            break
