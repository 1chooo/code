"""
Author: 1chooo<hugo970217@gmail.com>
Problem link: https://zerojudge.tw/ShowProblem?problemid=c290
Status: AC
"""

if __name__ == "__main__":
    s = [int(x) for x in input()]

    odd = even = 0

    for i in range(len(s)):
        if i % 2 == 0:
            odd += s[i]
        else:
            even += s[i]

    print(abs(odd - even))
