"""
* Author: 1chooo<hugo970217@gmail.com>
* Problem link: https://zerojudge.tw/ShowProblem?problemid=a005
* Status: AC
"""

if __name__ == "__main__" :

    run_time = int(input())

    for i in range(0, run_time) :
        input_string = str(input()).split(" ")

        a = int(input_string[0])
        b = int(input_string[1])
        c = int(input_string[2])
        d = int(input_string[3])

        if ((b - a) == (c - b)) :
            print(a, b, c, d, d + (b - a))
        else :
            print(a, b, c, d, int(d * (b / a)))
