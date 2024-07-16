# Problem link: https://zerojudge.tw/ShowProblem?problemid=a005
# Status: AC

runTimes = int(input())

for i in range(0, runTimes) :
    inputString = str(input()).split(" ")

    a = int(inputString[0])
    b = int(inputString[1])
    c = int(inputString[2])
    d = int(inputString[3])

    if ((b - a) == (c - b)) :
        print(a, b, c, d, d + (b - a))
    else :
        print(a, b, c, d, int(d * (b / a)))