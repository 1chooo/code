"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem link: https://zerojudge.tw/ShowProblem?problemid=a010
* Status: AC
"""

if __name__ == "__main__":
    inputNumber = int(input())

    temp = inputNumber ** (1 / 2)
    n = 2

    primeFactor = []
    while True:
        if n == temp or (inputNumber % n) == 0:
            break

        if inputNumber % n == 0:
            primeFactor.append(n)
            inputNumber //= n
            print(primeFactor)
        else:
            n += 1
